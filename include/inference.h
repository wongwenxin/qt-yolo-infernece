#pragma once

#include "onnxruntime_cxx_api.h"
#include "opencv2/opencv.hpp"
#include <iostream>
#include <ctime>
#include <vector>
#include <string>


#ifdef _WIN32
#include <Windows.h>
#include <direct.h>
#include <io.h>
#endif


#ifdef USE_CUDA
#include <cuda_fp16.h>
#endif

#define RET_OK nullptr;

using namespace std;
using namespace cv;

enum MODEL_TYPE {
    YOLO_ORIGIN_V5 = 0,
    YOLO_ORIGIN_V8 = 1,
    YOLO_ORIGIN_V8_HALF = 2
};

typedef struct YOLO_INIT_PARAM {
    std::string ModelPath;
    MODEL_TYPE ModelType = YOLO_ORIGIN_V8;
    float RectConfidenceThreshold = 0.6;
    float iouThreshold = 0.5;
    bool CUDAEnable = false;
    int LogSeverityLevel = 3;
    int IntraOpNumThreds = 1;
    vector<int> ImgSize = {640, 640};
}YOLO_INIT_PARAM;

typedef struct YOLO_RESULT{
    int classId;
    float confidece;
    cv::Rect box;
}YOLO_RESULT;

class YOLO_INFERENCE_CORE {
public:
    YOLO_INFERENCE_CORE();

    ~YOLO_INFERENCE_CORE();

public:
    char *CreatSession(YOLO_INIT_PARAM &iparams);

    char *RunSession(cv::Mat iImg, vector<YOLO_RESULT> &oResult);

    char *WarmUpSession();

    template<typename N>
    std::vector<YOLO_RESULT> TensorProcess(clock_t &starttime1, cv::Mat &iImg, N &blob, vector<int64_t> &inputNodeDims);

    std::vector<string> classes{};

private:
    Ort::Env env;
    Ort::SessionOptions sessionOptions;
    Ort::Session *session;
    Ort::RunOptions options;

    bool cudaEnable;
    vector<const char *> inputNodeNames;
    vector<const char *> outputNodeNames;
    float rectConfidenceThreshold;
    float iouThreshold;
    vector<int> imgSize;
    MODEL_TYPE modelType;
};

Mat PostProcess(Mat &iImg, vector<int> imgSize);