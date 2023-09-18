#pragma once
#include "opencv2/opencv.hpp"
#include <iostream>
#include <filesystem>
#include <vector>
#include <fstream>
#include "inference.h"
#include <regex>

using namespace cv;
using namespace std;

namespace tools {

   int read_yaml(std::string yamlPath, YOLO_INFERENCE_CORE *&p);
   void ResultVisualization(YOLO_INFERENCE_CORE *&p, string img_import_path, string img_save_path);
}
