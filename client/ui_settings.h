/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *workers;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *queue;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(383, 157);
        buttonBox = new QDialogButtonBox(Settings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(70, 110, 211, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        workers = new QSpinBox(Settings);
        workers->setObjectName(QString::fromUtf8("workers"));
        workers->setGeometry(QRect(260, 20, 61, 31));
        workers->setMinimum(1);
        workers->setMaximum(10);
        label = new QLabel(Settings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 141, 31));
        label->setMargin(0);
        label_2 = new QLabel(Settings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 201, 31));
        label_2->setMargin(0);
        queue = new QSpinBox(Settings);
        queue->setObjectName(QString::fromUtf8("queue"));
        queue->setGeometry(QRect(260, 70, 61, 31));
        queue->setMinimum(1);
        queue->setMaximum(10);

        retranslateUi(Settings);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Settings, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Settings, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        label->setText(QCoreApplication::translate("Settings", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\273\320\260\320\264\320\276\320\262\321\211\320\270\320\272\320\276\320\262", nullptr));
        label_2->setText(QCoreApplication::translate("Settings", "\320\234\320\260\320\272\321\201 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\200\320\260\320\261\320\276\321\207\320\270\321\205 \320\262 \320\276\321\207\320\265\321\200\320\265\320\264\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
