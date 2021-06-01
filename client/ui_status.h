/********************************************************************************
** Form generated from reading UI file 'status.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUS_H
#define UI_STATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Status
{
public:
    QPushButton *update;
    QPushButton *show;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Status)
    {
        if (Status->objectName().isEmpty())
            Status->setObjectName(QString::fromUtf8("Status"));
        Status->resize(618, 345);
        update = new QPushButton(Status);
        update->setObjectName(QString::fromUtf8("update"));
        update->setGeometry(QRect(470, 260, 141, 31));
        show = new QPushButton(Status);
        show->setObjectName(QString::fromUtf8("show"));
        show->setGeometry(QRect(470, 300, 141, 31));
        textBrowser = new QTextBrowser(Status);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 441, 321));
        textBrowser->setReadOnly(true);

        retranslateUi(Status);

        QMetaObject::connectSlotsByName(Status);
    } // setupUi

    void retranslateUi(QDialog *Status)
    {
        Status->setWindowTitle(QCoreApplication::translate("Status", "\320\236\320\272\320\275\320\276 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\217", nullptr));
        update->setText(QCoreApplication::translate("Status", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        show->setText(QCoreApplication::translate("Status", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Status: public Ui_Status {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUS_H
