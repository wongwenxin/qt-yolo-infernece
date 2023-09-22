/********************************************************************************
** Form generated from reading UI file 'InferencePage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFERENCEPAGE_H
#define UI_INFERENCEPAGE_H

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

class Ui_InferencePage
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
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBoxProcessor;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_10;
    QRadioButton *radioButtonCPU;
    QSpacerItem *verticalSpacer_11;
    QRadioButton *radioButtonGPU;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBoxDeploy;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QRadioButton *radioButtonONNX;
    QSpacerItem *verticalSpacer_5;
    QRadioButton *radioButtonTensor;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBoxAlgorithm;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_7;
    QRadioButton *radioButtonYO5;
    QSpacerItem *verticalSpacer_8;
    QRadioButton *radioButtonYO8;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBoxModel;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QRadioButton *radioButtonAuto;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *radioButtonHand;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButtonPrevious;
    QPushButton *pushButtonNext;

    void setupUi(QWidget *InferencePage)
    {
        if (InferencePage->objectName().isEmpty())
            InferencePage->setObjectName(QString::fromUtf8("InferencePage"));
        InferencePage->resize(1080, 840);
        preprocess_img = new QLabel(InferencePage);
        preprocess_img->setObjectName(QString::fromUtf8("preprocess_img"));
        preprocess_img->setGeometry(QRect(30, 20, 480, 480));
        post_image = new QLabel(InferencePage);
        post_image->setObjectName(QString::fromUtf8("post_image"));
        post_image->setGeometry(QRect(570, 20, 480, 480));
        layoutWidget = new QWidget(InferencePage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 660, 306, 27));
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

        layoutWidget1 = new QWidget(InferencePage);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(550, 590, 491, 163));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBoxProcessor = new QGroupBox(layoutWidget1);
        groupBoxProcessor->setObjectName(QString::fromUtf8("groupBoxProcessor"));
        verticalLayout_4 = new QVBoxLayout(groupBoxProcessor);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_10 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_10);

        radioButtonCPU = new QRadioButton(groupBoxProcessor);
        radioButtonCPU->setObjectName(QString::fromUtf8("radioButtonCPU"));

        verticalLayout_4->addWidget(radioButtonCPU);

        verticalSpacer_11 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_11);

        radioButtonGPU = new QRadioButton(groupBoxProcessor);
        radioButtonGPU->setObjectName(QString::fromUtf8("radioButtonGPU"));

        verticalLayout_4->addWidget(radioButtonGPU);

        verticalSpacer_12 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_12);


        horizontalLayout_2->addWidget(groupBoxProcessor);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        groupBoxDeploy = new QGroupBox(layoutWidget1);
        groupBoxDeploy->setObjectName(QString::fromUtf8("groupBoxDeploy"));
        verticalLayout_2 = new QVBoxLayout(groupBoxDeploy);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        radioButtonONNX = new QRadioButton(groupBoxDeploy);
        radioButtonONNX->setObjectName(QString::fromUtf8("radioButtonONNX"));

        verticalLayout_2->addWidget(radioButtonONNX);

        verticalSpacer_5 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        radioButtonTensor = new QRadioButton(groupBoxDeploy);
        radioButtonTensor->setObjectName(QString::fromUtf8("radioButtonTensor"));

        verticalLayout_2->addWidget(radioButtonTensor);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);


        horizontalLayout_2->addWidget(groupBoxDeploy);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        groupBoxAlgorithm = new QGroupBox(layoutWidget1);
        groupBoxAlgorithm->setObjectName(QString::fromUtf8("groupBoxAlgorithm"));
        verticalLayout_3 = new QVBoxLayout(groupBoxAlgorithm);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_7 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_7);

        radioButtonYO5 = new QRadioButton(groupBoxAlgorithm);
        radioButtonYO5->setObjectName(QString::fromUtf8("radioButtonYO5"));

        verticalLayout_3->addWidget(radioButtonYO5);

        verticalSpacer_8 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_8);

        radioButtonYO8 = new QRadioButton(groupBoxAlgorithm);
        radioButtonYO8->setObjectName(QString::fromUtf8("radioButtonYO8"));

        verticalLayout_3->addWidget(radioButtonYO8);

        verticalSpacer_9 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_9);


        horizontalLayout_2->addWidget(groupBoxAlgorithm);

        horizontalSpacer_6 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        groupBoxModel = new QGroupBox(layoutWidget1);
        groupBoxModel->setObjectName(QString::fromUtf8("groupBoxModel"));
        verticalLayout = new QVBoxLayout(groupBoxModel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        radioButtonAuto = new QRadioButton(groupBoxModel);
        radioButtonAuto->setObjectName(QString::fromUtf8("radioButtonAuto"));

        verticalLayout->addWidget(radioButtonAuto);

        verticalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        radioButtonHand = new QRadioButton(groupBoxModel);
        radioButtonHand->setObjectName(QString::fromUtf8("radioButtonHand"));

        verticalLayout->addWidget(radioButtonHand);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout_2->addWidget(groupBoxModel);

        pushButtonPrevious = new QPushButton(InferencePage);
        pushButtonPrevious->setObjectName(QString::fromUtf8("pushButtonPrevious"));
        pushButtonPrevious->setGeometry(QRect(400, 520, 89, 25));
        pushButtonNext = new QPushButton(InferencePage);
        pushButtonNext->setObjectName(QString::fromUtf8("pushButtonNext"));
        pushButtonNext->setGeometry(QRect(510, 520, 89, 25));

        retranslateUi(InferencePage);

        QMetaObject::connectSlotsByName(InferencePage);
    } // setupUi

    void retranslateUi(QWidget *InferencePage)
    {
        InferencePage->setWindowTitle(QApplication::translate("InferencePage", "ShowPage", nullptr));
        preprocess_img->setText(QApplication::translate("InferencePage", "TextLabel", nullptr));
        post_image->setText(QApplication::translate("InferencePage", "TextLabel", nullptr));
        pushButtonStart->setText(QApplication::translate("InferencePage", "Start", nullptr));
        pushButtonEnd->setText(QApplication::translate("InferencePage", "End", nullptr));
        groupBoxProcessor->setTitle(QApplication::translate("InferencePage", "Processor", nullptr));
        radioButtonCPU->setText(QApplication::translate("InferencePage", "CPU", nullptr));
        radioButtonGPU->setText(QApplication::translate("InferencePage", "GPU", nullptr));
        groupBoxDeploy->setTitle(QApplication::translate("InferencePage", "Deploy", nullptr));
        radioButtonONNX->setText(QApplication::translate("InferencePage", "ONNX", nullptr));
        radioButtonTensor->setText(QApplication::translate("InferencePage", "TensorRT", nullptr));
        groupBoxAlgorithm->setTitle(QApplication::translate("InferencePage", "Algorithm", nullptr));
        radioButtonYO5->setText(QApplication::translate("InferencePage", "YOLOV5", nullptr));
        radioButtonYO8->setText(QApplication::translate("InferencePage", "YOLOV8", nullptr));
        groupBoxModel->setTitle(QApplication::translate("InferencePage", "Model", nullptr));
        radioButtonAuto->setText(QApplication::translate("InferencePage", "Auto", nullptr));
        radioButtonHand->setText(QApplication::translate("InferencePage", "Hand", nullptr));
        pushButtonPrevious->setText(QApplication::translate("InferencePage", "Previous", nullptr));
        pushButtonNext->setText(QApplication::translate("InferencePage", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InferencePage: public Ui_InferencePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFERENCEPAGE_H
