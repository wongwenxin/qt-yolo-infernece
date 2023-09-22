//
// Created by wwx on 23-9-15.
//

#ifndef WWXUI_INFERENCEPAGE_H
#define WWXUI_INFERENCEPAGE_H

#include "superhead.h"

QT_BEGIN_NAMESPACE
namespace Ui { class InferencePage; }
QT_END_NAMESPACE

class InferencePage : public QWidget {
Q_OBJECT

public:
    explicit InferencePage(QWidget *parent = nullptr);

    ~InferencePage() override;

    void AutoResultVisualization(YOLO_INFERENCE_CORE *&p, string img_import_path, string img_save_path);
    void HandResultVisualization(YOLO_INFERENCE_CORE *&p);
    void radioButtonUnable(bool Run);
public slots:

public:
    std::string import_images_path;
    std::string import_models_path;
    std::string save_images_path;

private:
    vector<filesystem::directory_entry> HandImagesPath;
    bool isStart = false;
    bool isAuto = true;
    int ImageNums = 0;
    int indexImage = 0;
    YOLO_INIT_PARAM params;
    YOLO_INFERENCE_CORE *yolo = new YOLO_INFERENCE_CORE;

private slots:
    void NextIndex() {
    if (isStart) {
        indexImage++;
    }
};
    void PreviousIndex() {
        if (isStart) {
            indexImage--;
        }
    };
private:
    Ui::InferencePage *ui_inference;
};


#endif //WWXUI_INFERENCEPAGE_H
