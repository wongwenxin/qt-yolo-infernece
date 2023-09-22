#include "homepage.h"
#include "InferencePage.h"
#include "ui_InferencePage.h"


InferencePage::InferencePage(QWidget *parent) :
        QWidget(parent), ui_inference(new Ui::InferencePage) {
    ui_inference->setupUi(this);

    cout << import_models_path <<endl;
    ui_inference->pushButtonNext->setEnabled(false);
    ui_inference->pushButtonPrevious->setEnabled(false);

    /********************************CPU OR GPU*****************************************************************/
    connect(ui_inference->radioButtonCPU, &QRadioButton::clicked, [=](){
       params.CUDAEnable = false;
    });

    connect(ui_inference->radioButtonGPU, &QRadioButton::clicked, [=](){
        params.CUDAEnable = true;
    });
    /********************************YOLOV5 OR YOLOV8*****************************************************************/
    connect(ui_inference->radioButtonYO8, &QRadioButton::clicked, [=](){
        params.ModelType = YOLO_ORIGIN_V8;
    });

    connect(ui_inference->radioButtonYO5, &QRadioButton::clicked, [=](){
        params.ModelType = YOLO_ORIGIN_V5;
    });
    /********************************AUTO OR HAND*****************************************************************/
    connect(ui_inference->radioButtonAuto, &QRadioButton::clicked, [=](){
        isAuto = true;
        ui_inference->pushButtonNext->setEnabled(false);
        ui_inference->pushButtonPrevious->setEnabled(false);
    });
    connect(ui_inference->radioButtonHand, &QRadioButton::clicked, [=](){
        isAuto = false;
        ui_inference->pushButtonNext->setEnabled(true);
        ui_inference->pushButtonPrevious->setEnabled(true);
    });
    /********************************NEXT AND PREVIOUS*****************************************************************/
    connect(ui_inference->pushButtonNext, &QPushButton::clicked, [=](){
        if (isStart) {
            NextIndex();
            if (indexImage > ImageNums) {
                qDebug() << "Already at the end.";
                indexImage = ImageNums;
            } else {
                HandResultVisualization(yolo);

            }
        }
    });
    connect(ui_inference->pushButtonPrevious, &QPushButton::clicked, [=](){
        if (isStart) {
            PreviousIndex();
            if (indexImage < 0) {
                qDebug() << "Already at the front." << endl;
                indexImage = 0;
            } else {
                HandResultVisualization(yolo);
                }
            }
    });
    /********************************START AND END*****************************************************************/
    connect(ui_inference->pushButtonStart, &QPushButton::clicked, [=](){
        indexImage = 0;
        isStart = true;


        ui_inference->pushButtonStart->setEnabled(!isStart);
        radioButtonUnable(!isStart);

        std::string yamlpath = "/home/wwx/CLionProjects/yolo-ort-inference/yaml/coco.yaml";
        tools::read_yaml(yamlpath, yolo);
        //没有设初始值
        if(params.ModelType == YOLO_ORIGIN_V8) {
            params.ModelPath = "/home/wwx/CLionProjects/WWXUI/models/yolov8n.onnx";
        } else if (params.ModelType == YOLO_ORIGIN_V5) {
            params.ModelPath = "/home/wwx/CLionProjects/WWXUI/models/yolov5s.onnx";
        }
        yolo->CreatSession(params);

        if(isAuto) {
            AutoResultVisualization(yolo, "/home/wwx/Datasets/coco128/images/train2017",
                                          "/home/wwx/CLionProjects/WWXUI/models/yolov8n.onnx");
        }
        else if (!isAuto) {
            for (auto &i : filesystem::directory_iterator("/home/wwx/Datasets/coco128/images/train2017")) {
                ImageNums ++;
                HandImagesPath.push_back(i);
            }
            HandResultVisualization(yolo);
        }

        if (isAuto) {
            isStart = false;
        }

        radioButtonUnable(!isStart);
        ui_inference->pushButtonStart->setEnabled(!isStart);

    });

    connect(ui_inference->pushButtonEnd, &QPushButton::clicked, [=](){
       isStart = false;
        radioButtonUnable(!isStart);
        ui_inference->pushButtonStart->setEnabled(!isStart);
    });
}



InferencePage::~InferencePage() {
    delete ui_inference;
}

void InferencePage::AutoResultVisualization(YOLO_INFERENCE_CORE *&p, string img_import_path, string img_save_path) {

    for (auto &i : filesystem::directory_iterator(img_import_path)) {
        if (!isStart)
        {
            break;
        } else {
            if (i.path().extension() == ".jpg" || i.path().extension() == ".png" || i.path().extension() == ".jpeg") {
                string img_path = i.path().string();
                Mat img = imread(img_path);
                Mat temp_img;
                cv::cvtColor(img, temp_img, COLOR_BGR2RGB);
                vector <YOLO_RESULT> result;
                p->RunSession(img, result);

                for (auto &re: result) {
                    cv::RNG rng(cv::getTickCount());
                    cv::Scalar color(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
                    cv::rectangle(img, re.box, color, 2);

                    auto conf = floor(100 * re.confidece) / 100;
                    std::cout << std::fixed << std::setprecision(2);
                    string label = p->classes[re.classId] + " " + to_string(conf).substr(0, to_string(conf).size() - 4);

                    std::regex pattern("\\s+");
                    string class_name = regex_replace(p->classes[re.classId], pattern, "");

                    cv::rectangle(
                            img,
                            cv::Point(re.box.x, re.box.y - 25),
                            cv::Point(re.box.x + label.length() * 15, re.box.y),
                            color,
                            cv::FILLED
                    );

                    cv::putText(
                            img,
                            label,
                            cv::Point(re.box.x, re.box.y - 5),
                            cv::FONT_HERSHEY_SIMPLEX,
                            0.75,
                            cv::Scalar(0, 0, 0),
                            2
                    );
                }


                QImage pro_img = QImage(temp_img.data, temp_img.cols, temp_img.rows, temp_img.step,
                                        QImage::Format_RGB888);
                QPixmap mp;
                mp = mp.fromImage(pro_img);
                ui_inference->preprocess_img->setPixmap(mp);
                ui_inference->preprocess_img->setAlignment(Qt::AlignCenter);
                ui_inference->preprocess_img->setScaledContents(true);


                cv::cvtColor(img, img, COLOR_BGR2RGB);
                QImage post_img = QImage(img.data, img.cols, img.rows, img.step, QImage::Format_RGB888);
                QPixmap mp2;
                mp2 = mp2.fromImage(post_img);
                ui_inference->post_image->setPixmap(mp2);
                ui_inference->post_image->setAlignment(Qt::AlignCenter);
                ui_inference->post_image->setScaledContents(true);

                waitKey(20);
            }
        }
    }
}

void InferencePage::HandResultVisualization(YOLO_INFERENCE_CORE *&p) {

    if(HandImagesPath[indexImage].path().extension() == ".jpg" || HandImagesPath[indexImage].path().extension() == ".png" || HandImagesPath[indexImage].path().extension() == ".jpeg") {
        string img_path = HandImagesPath[indexImage].path().string();
        Mat img = imread(img_path);
        Mat temp_img;
        cv::cvtColor(img, temp_img, COLOR_BGR2RGB);
        vector<YOLO_RESULT> result;
        p->RunSession(img, result);

        for (auto &re : result) {
            cv::RNG rng(cv::getTickCount());
            cv::Scalar color(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255));
            cv::rectangle(img, re.box, color, 2);

            auto conf = floor(100 * re.confidece) / 100;
            std::cout << std::fixed << std::setprecision(2);
            string label = p->classes[re.classId] + " " + to_string(conf).substr(0, to_string(conf).size() - 4);

            std::regex pattern("\\s+");
            string class_name = regex_replace(p->classes[re.classId], pattern, "");

            cv::rectangle(
                    img,
                    cv::Point(re.box.x, re.box.y - 25),
                    cv::Point(re.box.x + label.length() * 15, re.box.y),
                    color,
                    cv::FILLED
            );

            cv::putText(
                    img,
                    label,
                    cv::Point(re.box.x, re.box.y - 5),
                    cv::FONT_HERSHEY_SIMPLEX,
                    0.75,
                    cv::Scalar(0, 0, 0),
                    2
            );
        }


        QImage pro_img = QImage(temp_img.data, temp_img.cols, temp_img.rows, temp_img.step, QImage::Format_RGB888);
        QPixmap mp;
        mp = mp.fromImage(pro_img);
        ui_inference->preprocess_img->setPixmap(mp);
        ui_inference->preprocess_img->setAlignment(Qt::AlignCenter);
        ui_inference->preprocess_img->setScaledContents(true);


        cv::cvtColor(img, img, COLOR_BGR2RGB);
        QImage post_img = QImage(img.data, img.cols, img.rows, img.step, QImage::Format_RGB888);
        QPixmap mp2;
        mp2 = mp2.fromImage(post_img);
        ui_inference->post_image->setPixmap(mp2);
        ui_inference->post_image->setAlignment(Qt::AlignCenter);
        ui_inference->post_image->setScaledContents(true);

    }

}

void InferencePage::radioButtonUnable(bool Run) {
    QList<QGroupBox*> groupBoxList = {ui_inference->groupBoxModel, ui_inference->groupBoxAlgorithm, ui_inference->groupBoxDeploy, ui_inference->groupBoxProcessor};
    for(QGroupBox *groupBox : groupBoxList) {
        for (QRadioButton *radioButton: groupBox->findChildren<QRadioButton *>()) {
            radioButton->setEnabled(Run);
        }
    }
}