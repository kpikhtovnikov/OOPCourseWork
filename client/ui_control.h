/********************************************************************************
** Form generated from reading UI file 'control.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROL_H
#define UI_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Control
{
public:
    QPushButton *add_worker;
    QPushButton *delete_worker;

    void setupUi(QDialog *Control)
    {
        if (Control->objectName().isEmpty())
            Control->setObjectName(QString::fromUtf8("Control"));
        Control->resize(352, 167);
        add_worker = new QPushButton(Control);
        add_worker->setObjectName(QString::fromUtf8("add_worker"));
        add_worker->setGeometry(QRect(40, 40, 271, 31));
        delete_worker = new QPushButton(Control);
        delete_worker->setObjectName(QString::fromUtf8("delete_worker"));
        delete_worker->setGeometry(QRect(40, 90, 271, 31));

        retranslateUi(Control);

        QMetaObject::connectSlotsByName(Control);
    } // setupUi

    void retranslateUi(QDialog *Control)
    {
        Control->setWindowTitle(QCoreApplication::translate("Control", "\320\236\320\272\320\275\320\276 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        add_worker->setText(QCoreApplication::translate("Control", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276", nullptr));
        delete_worker->setText(QCoreApplication::translate("Control", "\320\236\320\261\321\201\320\273\321\203\320\266\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Control: public Ui_Control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROL_H
