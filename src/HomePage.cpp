//
// Created by wwx on 23-9-13.
//

// You may need to build the project (run Qt uic code generator) to get "ui_homePage.h" resolved

#include "homepage.h"
#include "ui_HomePage.h"


HomePage::HomePage(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::HomePage) {
    ui->setupUi(this);



    QLabel *status_label1 = new QLabel("None", this);
    status_label1->setWordWrap(true);
    ui->statusbar->addWidget(status_label1);


    //Import Images
    connect(ui->actionImportImg, &QAction::triggered, [=](){
        import_image_path = QFileDialog::getExistingDirectory(this, "Import Images Path", QDir::homePath());
        if (!import_image_path.isEmpty()) {
            qDebug() << "Import Images Path:" << import_image_path << endl;
            ui->statusbar->showMessage(import_image_path);
            image_path_str = import_image_path.toStdString();

        }
    });


    connect(ui->actionSaveImg, &QAction::triggered, [=](){
        QString save_image_path = QFileDialog::getExistingDirectory(this, "Save Images Path", QDir::homePath());
        if (save_image_path.isEmpty()) {
            qDebug() << "Import Images Path:" << save_image_path << endl;
            ui->statusbar->showMessage(save_image_path);
        }
    });
//Import Model
    connect(ui->actionImportMod, &QAction::triggered, [=](){
        QString import_model_path = QFileDialog::getOpenFileName(this, "Import Model Path", QDir::homePath());
        if (!import_model_path.isEmpty()) {
            qDebug() << "Import Images Path:" << import_model_path << endl;
            model_path_str = import_model_path.toStdString();
        }
    });

    connect(ui->buttonInf, &QPushButton::clicked, [=](){
        InferencePage *showPage = new InferencePage();
        showPage->show();
    });

}



HomePage::~HomePage() {
    delete ui;
}
