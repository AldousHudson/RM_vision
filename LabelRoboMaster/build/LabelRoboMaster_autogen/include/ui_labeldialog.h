/********************************************************************************
** Form generated from reading UI file 'labeldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABELDIALOG_H
#define UI_LABELDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_LabelDialog
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox;
    QLabel *label;
    QCheckBox *checkBox;

    void setupUi(QDialog *LabelDialog)
    {
        if (LabelDialog->objectName().isEmpty())
            LabelDialog->setObjectName(QString::fromUtf8("LabelDialog"));
        LabelDialog->resize(400, 200);
        buttonBox = new QDialogButtonBox(LabelDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 150, 340, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboBox = new QComboBox(LabelDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(140, 20, 150, 25));
        label = new QLabel(LabelDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 90, 20));
        checkBox = new QCheckBox(LabelDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(30, 70, 90, 25));

        retranslateUi(LabelDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LabelDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LabelDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LabelDialog);
    } // setupUi

    void retranslateUi(QDialog *LabelDialog)
    {
        LabelDialog->setWindowTitle(QApplication::translate("LabelDialog", "Dialog", nullptr));
        comboBox->setItemText(0, QApplication::translate("LabelDialog", "BG", nullptr));
        comboBox->setItemText(1, QApplication::translate("LabelDialog", "B1", nullptr));
        comboBox->setItemText(2, QApplication::translate("LabelDialog", "B2", nullptr));
        comboBox->setItemText(3, QApplication::translate("LabelDialog", "B3", nullptr));
        comboBox->setItemText(4, QApplication::translate("LabelDialog", "B4", nullptr));
        comboBox->setItemText(5, QApplication::translate("LabelDialog", "B5", nullptr));
        comboBox->setItemText(6, QApplication::translate("LabelDialog", "BO", nullptr));
        comboBox->setItemText(7, QApplication::translate("LabelDialog", "Bs", nullptr));
        comboBox->setItemText(8, QApplication::translate("LabelDialog", "Bb", nullptr));
        comboBox->setItemText(9, QApplication::translate("LabelDialog", "RG", nullptr));
        comboBox->setItemText(10, QApplication::translate("LabelDialog", "R1", nullptr));
        comboBox->setItemText(11, QApplication::translate("LabelDialog", "R2", nullptr));
        comboBox->setItemText(12, QApplication::translate("LabelDialog", "R3", nullptr));
        comboBox->setItemText(13, QApplication::translate("LabelDialog", "R4", nullptr));
        comboBox->setItemText(14, QApplication::translate("LabelDialog", "R5", nullptr));
        comboBox->setItemText(15, QApplication::translate("LabelDialog", "RO", nullptr));
        comboBox->setItemText(16, QApplication::translate("LabelDialog", "Rs", nullptr));
        comboBox->setItemText(17, QApplication::translate("LabelDialog", "Rb", nullptr));
        comboBox->setItemText(18, QApplication::translate("LabelDialog", "NG", nullptr));
        comboBox->setItemText(19, QApplication::translate("LabelDialog", "N1", nullptr));
        comboBox->setItemText(20, QApplication::translate("LabelDialog", "N2", nullptr));
        comboBox->setItemText(21, QApplication::translate("LabelDialog", "N3", nullptr));
        comboBox->setItemText(22, QApplication::translate("LabelDialog", "N4", nullptr));
        comboBox->setItemText(23, QApplication::translate("LabelDialog", "N5", nullptr));
        comboBox->setItemText(24, QApplication::translate("LabelDialog", "NO", nullptr));
        comboBox->setItemText(25, QApplication::translate("LabelDialog", "Ns", nullptr));
        comboBox->setItemText(26, QApplication::translate("LabelDialog", "Nb", nullptr));
        comboBox->setItemText(27, QApplication::translate("LabelDialog", "PG", nullptr));
        comboBox->setItemText(28, QApplication::translate("LabelDialog", "P1", nullptr));
        comboBox->setItemText(29, QApplication::translate("LabelDialog", "P2", nullptr));
        comboBox->setItemText(30, QApplication::translate("LabelDialog", "P3", nullptr));
        comboBox->setItemText(31, QApplication::translate("LabelDialog", "P4", nullptr));
        comboBox->setItemText(32, QApplication::translate("LabelDialog", "P5", nullptr));
        comboBox->setItemText(33, QApplication::translate("LabelDialog", "PO", nullptr));
        comboBox->setItemText(34, QApplication::translate("LabelDialog", "Ps", nullptr));
        comboBox->setItemText(35, QApplication::translate("LabelDialog", "Pb", nullptr));

        label->setText(QApplication::translate("LabelDialog", "current class:", nullptr));
        checkBox->setText(QApplication::translate("LabelDialog", "delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LabelDialog: public Ui_LabelDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABELDIALOG_H
