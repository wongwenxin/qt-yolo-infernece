//
// Created by wwx on 23-9-13.
//

#ifndef WWXUI_HOMEPAGE_H
#define WWXUI_HOMEPAGE_H

#include <QMainWindow>
#include <QWidget>
#include <QApplication>
#include <QFileDialog>
#include <QDebug>
#include <QLabel>
#include <iostream>
#include <vector>
#include <string>
#include <QFile>
#include <QtGlobal>
#include <QTimer>
#include "inference.h"
#include "tools.h"
#include "InferencePage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class HomePage; }
QT_END_NAMESPACE

class HomePage : public QMainWindow {
Q_OBJECT

public:
    explicit HomePage(QWidget *parent = nullptr);

    ~HomePage() override;


private:
    QString import_image_path;
    QString save_images_path;
    QString import_model_path;
    std::string image_path_str;
    std::string model_path_str;

private:
    Ui::HomePage *ui;
};


#endif //WWXUI_HOMEPAGE_H
