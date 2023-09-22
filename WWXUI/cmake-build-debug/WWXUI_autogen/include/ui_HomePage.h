/********************************************************************************
** Form generated from reading UI file 'HomePage.ui'
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QAction *actionImportImg;
    QAction *actionSaveImg;
    QAction *actionImportMod;
    QWidget *centralwidget;
    QGroupBox *groupBox_3;
    QGroupBox *groupBoxfun;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *buttonInf;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *button3D;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuModel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName(QString::fromUtf8("HomePage"));
        HomePage->resize(480, 480);
        actionImportImg = new QAction(HomePage);
        actionImportImg->setObjectName(QString::fromUtf8("actionImportImg"));
        actionSaveImg = new QAction(HomePage);
        actionSaveImg->setObjectName(QString::fromUtf8("actionSaveImg"));
        actionImportMod = new QAction(HomePage);
        actionImportMod->setObjectName(QString::fromUtf8("actionImportMod"));
        centralwidget = new QWidget(HomePage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 650, 120, 80));
        groupBoxfun = new QGroupBox(centralwidget);
        groupBoxfun->setObjectName(QString::fromUtf8("groupBoxfun"));
        groupBoxfun->setGeometry(QRect(40, 270, 346, 69));
        horizontalLayout_5 = new QHBoxLayout(groupBoxfun);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        buttonInf = new QPushButton(groupBoxfun);
        buttonInf->setObjectName(QString::fromUtf8("buttonInf"));

        horizontalLayout_5->addWidget(buttonInf);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        button3D = new QPushButton(groupBoxfun);
        button3D->setObjectName(QString::fromUtf8("button3D"));

        horizontalLayout_5->addWidget(button3D);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 451, 201));
        HomePage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomePage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 480, 28));
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
        HomePage->setWindowTitle(QApplication::translate("HomePage", "homePage", nullptr));
#ifndef QT_NO_STATUSTIP
        HomePage->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        actionImportImg->setText(QApplication::translate("HomePage", "Impoet Images", nullptr));
        actionSaveImg->setText(QApplication::translate("HomePage", "Save Images", nullptr));
        actionImportMod->setText(QApplication::translate("HomePage", "Import Model", nullptr));
        groupBox_3->setTitle(QApplication::translate("HomePage", "GroupBox", nullptr));
        groupBoxfun->setTitle(QApplication::translate("HomePage", "Funciton", nullptr));
        buttonInf->setText(QApplication::translate("HomePage", "Inference", nullptr));
        button3D->setText(QApplication::translate("HomePage", "3D", nullptr));
        label->setText(QApplication::translate("HomePage", "INFO", nullptr));
        menuFile->setTitle(QApplication::translate("HomePage", "File", nullptr));
        menuModel->setTitle(QApplication::translate("HomePage", "Model", nullptr));
#ifndef QT_NO_STATUSTIP
        statusbar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
