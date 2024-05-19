/********************************************************************************
** Form generated from reading UI file 'nagelpoint.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAGELPOINT_H
#define UI_NAGELPOINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <drawarea.h>

QT_BEGIN_NAMESPACE

class Ui_nagelpoint
{
public:
    QWidget *centralwidget;
    DrawArea *drawArea;
    QWidget *layoutWidget;
    QGridLayout *vertLayout;
    QLineEdit *ymin;
    QLabel *xmaxLabel;
    QLabel *xminLabel;
    QPushButton *clearButton;
    QLineEdit *xmax;
    QLabel *yminLabel;
    QPushButton *closeButton;
    QLabel *ymaxLabel;
    QPushButton *drawButton;
    QLineEdit *xmin;
    QLabel *ymax;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *nagelpoint)
    {
        if (nagelpoint->objectName().isEmpty())
            nagelpoint->setObjectName(QString::fromUtf8("nagelpoint"));
        nagelpoint->resize(1135, 645);
        centralwidget = new QWidget(nagelpoint);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        drawArea = new DrawArea(centralwidget);
        drawArea->setObjectName(QString::fromUtf8("drawArea"));
        drawArea->setGeometry(QRect(20, 10, 801, 591));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(drawArea->sizePolicy().hasHeightForWidth());
        drawArea->setSizePolicy(sizePolicy);
        drawArea->setMinimumSize(QSize(640, 480));
        drawArea->setBaseSize(QSize(800, 600));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(830, 10, 297, 591));
        vertLayout = new QGridLayout(layoutWidget);
        vertLayout->setObjectName(QString::fromUtf8("vertLayout"));
        vertLayout->setSizeConstraint(QLayout::SetMaximumSize);
        vertLayout->setContentsMargins(0, 0, 0, 0);
        ymin = new QLineEdit(layoutWidget);
        ymin->setObjectName(QString::fromUtf8("ymin"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ymin->sizePolicy().hasHeightForWidth());
        ymin->setSizePolicy(sizePolicy1);
        ymin->setMinimumSize(QSize(80, 0));
        ymin->setMaximumSize(QSize(100, 16777215));

        vertLayout->addWidget(ymin, 1, 1, 1, 1);

        xmaxLabel = new QLabel(layoutWidget);
        xmaxLabel->setObjectName(QString::fromUtf8("xmaxLabel"));

        vertLayout->addWidget(xmaxLabel, 0, 2, 1, 1);

        xminLabel = new QLabel(layoutWidget);
        xminLabel->setObjectName(QString::fromUtf8("xminLabel"));

        vertLayout->addWidget(xminLabel, 0, 0, 1, 1);

        clearButton = new QPushButton(layoutWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        vertLayout->addWidget(clearButton, 2, 1, 1, 1);

        xmax = new QLineEdit(layoutWidget);
        xmax->setObjectName(QString::fromUtf8("xmax"));
        sizePolicy1.setHeightForWidth(xmax->sizePolicy().hasHeightForWidth());
        xmax->setSizePolicy(sizePolicy1);
        xmax->setMinimumSize(QSize(80, 0));
        xmax->setMaximumSize(QSize(100, 16777215));

        vertLayout->addWidget(xmax, 0, 3, 1, 1);

        yminLabel = new QLabel(layoutWidget);
        yminLabel->setObjectName(QString::fromUtf8("yminLabel"));

        vertLayout->addWidget(yminLabel, 1, 0, 1, 1);

        closeButton = new QPushButton(layoutWidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        vertLayout->addWidget(closeButton, 3, 3, 1, 1);

        ymaxLabel = new QLabel(layoutWidget);
        ymaxLabel->setObjectName(QString::fromUtf8("ymaxLabel"));

        vertLayout->addWidget(ymaxLabel, 1, 2, 1, 1);

        drawButton = new QPushButton(layoutWidget);
        drawButton->setObjectName(QString::fromUtf8("drawButton"));

        vertLayout->addWidget(drawButton, 2, 3, 1, 1);

        xmin = new QLineEdit(layoutWidget);
        xmin->setObjectName(QString::fromUtf8("xmin"));
        sizePolicy1.setHeightForWidth(xmin->sizePolicy().hasHeightForWidth());
        xmin->setSizePolicy(sizePolicy1);
        xmin->setMinimumSize(QSize(80, 0));
        xmin->setMaximumSize(QSize(100, 16777215));

        vertLayout->addWidget(xmin, 0, 1, 1, 1);

        ymax = new QLabel(layoutWidget);
        ymax->setObjectName(QString::fromUtf8("ymax"));
        ymax->setMinimumSize(QSize(80, 0));
        ymax->setMaximumSize(QSize(100, 16777215));
        ymax->setFrameShape(QFrame::Panel);

        vertLayout->addWidget(ymax, 1, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vertLayout->addItem(verticalSpacer, 4, 3, 1, 1);

        nagelpoint->setCentralWidget(centralwidget);
        menubar = new QMenuBar(nagelpoint);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1135, 22));
        nagelpoint->setMenuBar(menubar);
        statusbar = new QStatusBar(nagelpoint);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        nagelpoint->setStatusBar(statusbar);

        retranslateUi(nagelpoint);

        QMetaObject::connectSlotsByName(nagelpoint);
    } // setupUi

    void retranslateUi(QMainWindow *nagelpoint)
    {
        nagelpoint->setWindowTitle(QCoreApplication::translate("nagelpoint", "nagelpoint", nullptr));
        xmaxLabel->setText(QCoreApplication::translate("nagelpoint", "xmax:", nullptr));
        xminLabel->setText(QCoreApplication::translate("nagelpoint", "xmin:", nullptr));
        clearButton->setText(QCoreApplication::translate("nagelpoint", "Clear", nullptr));
        yminLabel->setText(QCoreApplication::translate("nagelpoint", "ymin:", nullptr));
        closeButton->setText(QCoreApplication::translate("nagelpoint", "Close", nullptr));
        ymaxLabel->setText(QCoreApplication::translate("nagelpoint", "ymax:", nullptr));
        drawButton->setText(QCoreApplication::translate("nagelpoint", "Draw", nullptr));
        ymax->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class nagelpoint: public Ui_nagelpoint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAGELPOINT_H
