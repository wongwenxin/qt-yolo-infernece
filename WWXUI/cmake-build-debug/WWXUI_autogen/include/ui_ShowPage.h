/********************************************************************************
** Form generated from reading UI file 'ShowPage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPAGE_H
#define UI_SHOWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowPage
{
public:
    QLabel *preprocess_img;
    QLabel *post_image;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonStart;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonEnd;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_10;
    QRadioButton *radioButtonCPU;
    QSpacerItem *verticalSpacer_11;
    QRadioButton *radioButtonGPU;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QRadioButton *radioButtonONNX;
    QSpacerItem *verticalSpacer_5;
    QRadioButton *radioButtonTensor;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_7;
    QRadioButton *radioButtonYO5;
    QSpacerItem *verticalSpacer_8;
    QRadioButton *radioButtonYO8;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QRadioButton *radioButtonAuto;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *radioButtonHand;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *ShowPage)
    {
        if (ShowPage->objectName().isEmpty())
            ShowPage->setObjectName(QString::fromUtf8("ShowPage"));
        ShowPage->resize(1080, 840);
        preprocess_img = new QLabel(ShowPage);
        preprocess_img->setObjectName(QString::fromUtf8("preprocess_img"));
        preprocess_img->setGeometry(QRect(30, 20, 480, 480));
        post_image = new QLabel(ShowPage);
        post_image->setObjectName(QString::fromUtf8("post_image"));
        post_image->setGeometry(QRect(570, 20, 480, 480));
        layoutWidget = new QWidget(ShowPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 650, 306, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButtonStart = new QPushButton(layoutWidget);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));

        horizontalLayout->addWidget(pushButtonStart);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonEnd = new QPushButton(layoutWidget);
        pushButtonEnd->setObjectName(QString::fromUtf8("pushButtonEnd"));

        horizontalLayout->addWidget(pushButtonEnd);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        widget = new QWidget(ShowPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(550, 590, 491, 163));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_10 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_10);

        radioButtonCPU = new QRadioButton(groupBox_4);
        radioButtonCPU->setObjectName(QString::fromUtf8("radioButtonCPU"));

        verticalLayout_4->addWidget(radioButtonCPU);

        verticalSpacer_11 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_11);

        radioButtonGPU = new QRadioButton(groupBox_4);
        radioButtonGPU->setObjectName(QString::fromUtf8("radioButtonGPU"));

        verticalLayout_4->addWidget(radioButtonGPU);

        verticalSpacer_12 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_12);


        horizontalLayout_2->addWidget(groupBox_4);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        radioButtonONNX = new QRadioButton(groupBox_2);
        radioButtonONNX->setObjectName(QString::fromUtf8("radioButtonONNX"));

        verticalLayout_2->addWidget(radioButtonONNX);

        verticalSpacer_5 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        radioButtonTensor = new QRadioButton(groupBox_2);
        radioButtonTensor->setObjectName(QString::fromUtf8("radioButtonTensor"));

        verticalLayout_2->addWidget(radioButtonTensor);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);


        horizontalLayout_2->addWidget(groupBox_2);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_7 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_7);

        radioButtonYO5 = new QRadioButton(groupBox_3);
        radioButtonYO5->setObjectName(QString::fromUtf8("radioButtonYO5"));

        verticalLayout_3->addWidget(radioButtonYO5);

        verticalSpacer_8 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_8);

        radioButtonYO8 = new QRadioButton(groupBox_3);
        radioButtonYO8->setObjectName(QString::fromUtf8("radioButtonYO8"));

        verticalLayout_3->addWidget(radioButtonYO8);

        verticalSpacer_9 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_9);


        horizontalLayout_2->addWidget(groupBox_3);

        horizontalSpacer_6 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        radioButtonAuto = new QRadioButton(groupBox);
        radioButtonAuto->setObjectName(QString::fromUtf8("radioButtonAuto"));

        verticalLayout->addWidget(radioButtonAuto);

        verticalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        radioButtonHand = new QRadioButton(groupBox);
        radioButtonHand->setObjectName(QString::fromUtf8("radioButtonHand"));

        verticalLayout->addWidget(radioButtonHand);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout_2->addWidget(groupBox);


        retranslateUi(ShowPage);

        QMetaObject::connectSlotsByName(ShowPage);
    } // setupUi

    void retranslateUi(QWidget *ShowPage)
    {
        ShowPage->setWindowTitle(QApplication::translate("ShowPage", "ShowPage", nullptr));
        preprocess_img->setText(QApplication::translate("ShowPage", "TextLabel", nullptr));
        post_image->setText(QApplication::translate("ShowPage", "TextLabel", nullptr));
        pushButtonStart->setText(QApplication::translate("ShowPage", "Start", nullptr));
        pushButtonEnd->setText(QApplication::translate("ShowPage", "End", nullptr));
        groupBox_4->setTitle(QApplication::translate("ShowPage", "GroupBox", nullptr));
        radioButtonCPU->setText(QApplication::translate("ShowPage", "CPU", nullptr));
        radioButtonGPU->setText(QApplication::translate("ShowPage", "GPU", nullptr));
        groupBox_2->setTitle(QApplication::translate("ShowPage", "GroupBox", nullptr));
        radioButtonONNX->setText(QApplication::translate("ShowPage", "ONNX", nullptr));
        radioButtonTensor->setText(QApplication::translate("ShowPage", "TensorRT", nullptr));
        groupBox_3->setTitle(QApplication::translate("ShowPage", "GroupBox", nullptr));
        radioButtonYO5->setText(QApplication::translate("ShowPage", "YOLOV5", nullptr));
        radioButtonYO8->setText(QApplication::translate("ShowPage", "YOLOV8", nullptr));
        groupBox->setTitle(QApplication::translate("ShowPage", "GroupBox", nullptr));
        radioButtonAuto->setText(QApplication::translate("ShowPage", "Auto", nullptr));
        radioButtonHand->setText(QApplication::translate("ShowPage", "Hand", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowPage: public Ui_ShowPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPAGE_H
