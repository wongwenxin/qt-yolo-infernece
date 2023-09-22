/********************************************************************************
** Form generated from reading UI file 'homePage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homePage
{
public:
    QAction *actionImportImg;
    QAction *actionSaveImg;
    QAction *actionImportMod;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QGroupBox *groupBox_2;
    QRadioButton *buttonYolov5;
    QRadioButton *radioButton_4;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuModel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName(QString::fromUtf8("HomePage"));
        HomePage->resize(960, 1280);
        actionImportImg = new QAction(HomePage);
        actionImportImg->setObjectName(QString::fromUtf8("actionImportImg"));
        actionSaveImg = new QAction(HomePage);
        actionSaveImg->setObjectName(QString::fromUtf8("actionSaveImg"));
        actionImportMod = new QAction(HomePage);
        actionImportMod->setObjectName(QString::fromUtf8("actionImportMod"));
        centralwidget = new QWidget(HomePage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(610, 360, 281, 121));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(150, 50, 112, 23));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 50, 112, 23));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(600, 150, 271, 111));
        buttonYolov5 = new QRadioButton(groupBox_2);
        buttonYolov5->setObjectName(QString::fromUtf8("buttonYolov5"));
        buttonYolov5->setGeometry(QRect(10, 50, 112, 23));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(130, 50, 112, 23));
        HomePage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomePage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 960, 28));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuModel = new QMenu(menubar);
        menuModel->setObjectName(QString::fromUtf8("menuModel"));
        HomePage->setMenuBar(menubar);
        statusbar = new QStatusBar(HomePage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HomePage->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuModel->menuAction());
        menuFile->addAction(actionImportImg);
        menuFile->addSeparator();
        menuFile->addAction(actionSaveImg);
        menuModel->addAction(actionImportMod);

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QMainWindow *HomePage)
    {
        HomePage->setWindowTitle(QApplication::translate("homePage", "homePage", nullptr));
        actionImportImg->setText(QApplication::translate("homePage", "Impoet Images", nullptr));
        actionSaveImg->setText(QApplication::translate("homePage", "Save Images", nullptr));
        actionImportMod->setText(QApplication::translate("homePage", "Import Model", nullptr));
        groupBox->setTitle(QApplication::translate("homePage", "GroupBox", nullptr));
        radioButton_2->setText(QApplication::translate("homePage", "yolov8", nullptr));
        radioButton->setText(QApplication::translate("homePage", "yolov5", nullptr));
        groupBox_2->setTitle(QApplication::translate("homePage", "GroupBox", nullptr));
        buttonYolov5->setText(QApplication::translate("homePage", "ONNX", nullptr));
        radioButton_4->setText(QApplication::translate("homePage", "TensoRT", nullptr));
        menuFile->setTitle(QApplication::translate("homePage", "File", nullptr));
        menuModel->setTitle(QApplication::translate("homePage", "Model", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homePage: public Ui_homePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
