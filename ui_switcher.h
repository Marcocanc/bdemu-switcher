/********************************************************************************
** Form generated from reading UI file 'switcher.ui'
**
** Created: Thu Oct 4 23:36:43 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWITCHER_H
#define UI_SWITCHER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Switcher
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *line;
    QPushButton *logicBt;
    QLineEdit *diskPath;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLineEdit *noSlots;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *defaultBox;
    QLineEdit *statusBox;
    QLabel *label_6;
    QLabel *label_7;
    QFrame *line_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Switcher)
    {
        if (Switcher->objectName().isEmpty())
            Switcher->setObjectName(QString::fromUtf8("Switcher"));
        Switcher->resize(482, 240);
        centralWidget = new QWidget(Switcher);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 191, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 170, 201, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 10, 201, 16));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(140, 20, 191, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        logicBt = new QPushButton(centralWidget);
        logicBt->setObjectName(QString::fromUtf8("logicBt"));
        logicBt->setGeometry(QRect(163, 67, 60, 32));
        diskPath = new QLineEdit(centralWidget);
        diskPath->setObjectName(QString::fromUtf8("diskPath"));
        diskPath->setGeometry(QRect(20, 70, 141, 22));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 188, 129, 32));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 190, 271, 26));
        noSlots = new QLineEdit(centralWidget);
        noSlots->setObjectName(QString::fromUtf8("noSlots"));
        noSlots->setGeometry(QRect(190, 100, 31, 22));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(noSlots->sizePolicy().hasHeightForWidth());
        noSlots->setSizePolicy(sizePolicy);
        noSlots->setReadOnly(true);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 100, 171, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 130, 131, 16));
        defaultBox = new QLineEdit(centralWidget);
        defaultBox->setObjectName(QString::fromUtf8("defaultBox"));
        defaultBox->setGeometry(QRect(150, 130, 281, 22));
        defaultBox->setReadOnly(true);
        statusBox = new QLineEdit(centralWidget);
        statusBox->setObjectName(QString::fromUtf8("statusBox"));
        statusBox->setGeometry(QRect(260, 70, 201, 22));
        statusBox->setReadOnly(true);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 40, 41, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(440, 0, 41, 16));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(230, 40, 20, 81));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        Switcher->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Switcher);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Switcher->setStatusBar(statusBar);

        retranslateUi(Switcher);

        QMetaObject::connectSlotsByName(Switcher);
    } // setupUi

    void retranslateUi(QMainWindow *Switcher)
    {
        Switcher->setWindowTitle(QApplication::translate("Switcher", "Switcher", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Switcher", "Enter path to BDemu Drive:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Switcher", "Select the default Slot", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Switcher", "BDEMU Switcher by Marcocanc", 0, QApplication::UnicodeUTF8));
        logicBt->setText(QApplication::translate("Switcher", "Go", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Switcher", "Set as Default", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Switcher", "Number of installed slots:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Switcher", "Current default slot:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Switcher", "Status:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Switcher", "V.1.3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Switcher: public Ui_Switcher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWITCHER_H
