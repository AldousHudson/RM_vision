/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include "drawonpic.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *openDirectoryPushButton;
    QPushButton *savePushButton;
    QPushButton *addLabelPushButton;
    QPushButton *smartPushButton;
    QPushButton *smartAllPushButton;
    QPushButton *nextPushButton;
    QPushButton *prevPushButton;
    QCheckBox *autoSaveCheckBox;
    QGroupBox *groupBox_2;
    QListWidget *labelListWidget;
    QGroupBox *groupBox_3;
    QListWidget *fileListWidget;
    QSlider *fileListHorizontalSlider;
    QLabel *fileListLabel;
    DrawOnPic *label;
    QLabel *label_2;
    QLabel *labelOpenvino;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1500, 800);
        MainWindow->setMinimumSize(QSize(1500, 800));
        MainWindow->setMaximumSize(QSize(1500, 800));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 200, 640));
        openDirectoryPushButton = new QPushButton(groupBox);
        openDirectoryPushButton->setObjectName(QString::fromUtf8("openDirectoryPushButton"));
        openDirectoryPushButton->setGeometry(QRect(0, 20, 200, 80));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/resource/directory.png"), QSize(), QIcon::Normal, QIcon::Off);
        openDirectoryPushButton->setIcon(icon);
        openDirectoryPushButton->setIconSize(QSize(32, 32));
        savePushButton = new QPushButton(groupBox);
        savePushButton->setObjectName(QString::fromUtf8("savePushButton"));
        savePushButton->setGeometry(QRect(0, 100, 200, 80));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/resource/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        savePushButton->setIcon(icon1);
        savePushButton->setIconSize(QSize(32, 32));
        addLabelPushButton = new QPushButton(groupBox);
        addLabelPushButton->setObjectName(QString::fromUtf8("addLabelPushButton"));
        addLabelPushButton->setGeometry(QRect(0, 180, 200, 80));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/resource/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addLabelPushButton->setIcon(icon2);
        addLabelPushButton->setIconSize(QSize(32, 32));
        smartPushButton = new QPushButton(groupBox);
        smartPushButton->setObjectName(QString::fromUtf8("smartPushButton"));
        smartPushButton->setGeometry(QRect(0, 260, 200, 80));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/resource/auto-fix.png"), QSize(), QIcon::Normal, QIcon::Off);
        smartPushButton->setIcon(icon3);
        smartPushButton->setIconSize(QSize(32, 32));
        smartAllPushButton = new QPushButton(groupBox);
        smartAllPushButton->setObjectName(QString::fromUtf8("smartAllPushButton"));
        smartAllPushButton->setGeometry(QRect(0, 340, 200, 80));
        smartAllPushButton->setIcon(icon3);
        smartAllPushButton->setIconSize(QSize(32, 32));
        nextPushButton = new QPushButton(groupBox);
        nextPushButton->setObjectName(QString::fromUtf8("nextPushButton"));
        nextPushButton->setGeometry(QRect(0, 420, 200, 80));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/resource/right-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextPushButton->setIcon(icon4);
        nextPushButton->setIconSize(QSize(32, 32));
        prevPushButton = new QPushButton(groupBox);
        prevPushButton->setObjectName(QString::fromUtf8("prevPushButton"));
        prevPushButton->setGeometry(QRect(0, 500, 200, 80));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/resource/left-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        prevPushButton->setIcon(icon5);
        prevPushButton->setIconSize(QSize(32, 32));
        autoSaveCheckBox = new QCheckBox(groupBox);
        autoSaveCheckBox->setObjectName(QString::fromUtf8("autoSaveCheckBox"));
        autoSaveCheckBox->setGeometry(QRect(50, 590, 100, 25));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(1200, 0, 300, 300));
        labelListWidget = new QListWidget(groupBox_2);
        labelListWidget->setObjectName(QString::fromUtf8("labelListWidget"));
        labelListWidget->setGeometry(QRect(0, 20, 300, 280));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(1200, 300, 300, 500));
        fileListWidget = new QListWidget(groupBox_3);
        fileListWidget->setObjectName(QString::fromUtf8("fileListWidget"));
        fileListWidget->setGeometry(QRect(0, 40, 300, 460));
        fileListHorizontalSlider = new QSlider(groupBox_3);
        fileListHorizontalSlider->setObjectName(QString::fromUtf8("fileListHorizontalSlider"));
        fileListHorizontalSlider->setGeometry(QRect(0, 20, 160, 20));
        fileListHorizontalSlider->setOrientation(Qt::Horizontal);
        fileListLabel = new QLabel(groupBox_3);
        fileListLabel->setObjectName(QString::fromUtf8("fileListLabel"));
        fileListLabel->setGeometry(QRect(170, 20, 130, 20));
        label = new DrawOnPic(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 0, 1000, 800));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 640, 200, 140));
        labelOpenvino = new QLabel(centralWidget);
        labelOpenvino->setObjectName(QString::fromUtf8("labelOpenvino"));
        labelOpenvino->setGeometry(QRect(0, 780, 200, 20));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\212\237\350\203\275\345\214\272", nullptr));
        openDirectoryPushButton->setText(QApplication::translate("MainWindow", "Open Directory (O)", nullptr));
#ifndef QT_NO_SHORTCUT
        openDirectoryPushButton->setShortcut(QApplication::translate("MainWindow", "O", nullptr));
#endif // QT_NO_SHORTCUT
        savePushButton->setText(QApplication::translate("MainWindow", "Save (Ctrl+S)", nullptr));
#ifndef QT_NO_SHORTCUT
        savePushButton->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        addLabelPushButton->setText(QApplication::translate("MainWindow", "Add Label (A)", nullptr));
#ifndef QT_NO_SHORTCUT
        addLabelPushButton->setShortcut(QApplication::translate("MainWindow", "A", nullptr));
#endif // QT_NO_SHORTCUT
        smartPushButton->setText(QApplication::translate("MainWindow", "Smart (space)", nullptr));
#ifndef QT_NO_SHORTCUT
        smartPushButton->setShortcut(QApplication::translate("MainWindow", "Space", nullptr));
#endif // QT_NO_SHORTCUT
        smartAllPushButton->setText(QApplication::translate("MainWindow", "Smart All", nullptr));
        nextPushButton->setText(QApplication::translate("MainWindow", "Next (e)", nullptr));
#ifndef QT_NO_SHORTCUT
        nextPushButton->setShortcut(QApplication::translate("MainWindow", "E", nullptr));
#endif // QT_NO_SHORTCUT
        prevPushButton->setText(QApplication::translate("MainWindow", "Prev (q)", nullptr));
#ifndef QT_NO_SHORTCUT
        prevPushButton->setShortcut(QApplication::translate("MainWindow", "Q", nullptr));
#endif // QT_NO_SHORTCUT
        autoSaveCheckBox->setText(QApplication::translate("MainWindow", "Auto Save", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "LabelList (\345\217\214\345\207\273\344\277\256\346\224\271\347\261\273\345\210\253\346\210\226\345\210\240\351\231\244)", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "FileList", nullptr));
        fileListLabel->setText(QApplication::translate("MainWindow", "[0/0]", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        labelOpenvino->setText(QApplication::translate("MainWindow", "openvino: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
