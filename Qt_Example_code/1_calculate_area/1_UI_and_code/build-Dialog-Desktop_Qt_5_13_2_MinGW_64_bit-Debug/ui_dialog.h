/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *radiusLabel;
    QLabel *areaLabel_1;
    QLabel *areaLabel_2;
    QLineEdit *radiusLineEdit;
    QPushButton *countBtn;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 193);
        radiusLabel = new QLabel(Dialog);
        radiusLabel->setObjectName(QString::fromUtf8("radiusLabel"));
        radiusLabel->setGeometry(QRect(40, 70, 54, 12));
        areaLabel_1 = new QLabel(Dialog);
        areaLabel_1->setObjectName(QString::fromUtf8("areaLabel_1"));
        areaLabel_1->setGeometry(QRect(220, 70, 54, 12));
        areaLabel_2 = new QLabel(Dialog);
        areaLabel_2->setObjectName(QString::fromUtf8("areaLabel_2"));
        areaLabel_2->setGeometry(QRect(260, 70, 91, 21));
        areaLabel_2->setFrameShape(QFrame::Panel);
        areaLabel_2->setFrameShadow(QFrame::Sunken);
        radiusLineEdit = new QLineEdit(Dialog);
        radiusLineEdit->setObjectName(QString::fromUtf8("radiusLineEdit"));
        radiusLineEdit->setGeometry(QRect(80, 70, 113, 20));
        countBtn = new QPushButton(Dialog);
        countBtn->setObjectName(QString::fromUtf8("countBtn"));
        countBtn->setGeometry(QRect(270, 120, 75, 23));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        radiusLabel->setText(QCoreApplication::translate("Dialog", "\345\215\212\345\276\204\357\274\232", nullptr));
        areaLabel_1->setText(QCoreApplication::translate("Dialog", "\351\235\242\347\247\257\357\274\232", nullptr));
        areaLabel_2->setText(QString());
        countBtn->setText(QCoreApplication::translate("Dialog", "\350\256\241\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
