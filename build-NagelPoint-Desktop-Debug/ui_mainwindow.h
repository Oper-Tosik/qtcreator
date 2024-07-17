/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <drawarea.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *GergonneButton;
    QPushButton *NagelButton;
    QPushButton *LemoineButton;
    QPushButton *FermatButton;
    DrawArea *drawArea;
    QGridLayout *VertLayout;
    QLabel *CLabel;
    QLabel *BLabel;
    QLineEdit *ALine;
    QLineEdit *CLine;
    QPushButton *drawButton;
    QPushButton *clearButton;
    QLabel *ALabel;
    QLineEdit *BLine;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1097, 654);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        GergonneButton = new QPushButton(centralWidget);
        GergonneButton->setObjectName(QString::fromUtf8("GergonneButton"));

        horizontalLayout->addWidget(GergonneButton);

        NagelButton = new QPushButton(centralWidget);
        NagelButton->setObjectName(QString::fromUtf8("NagelButton"));

        horizontalLayout->addWidget(NagelButton);

        LemoineButton = new QPushButton(centralWidget);
        LemoineButton->setObjectName(QString::fromUtf8("LemoineButton"));

        horizontalLayout->addWidget(LemoineButton);

        FermatButton = new QPushButton(centralWidget);
        FermatButton->setObjectName(QString::fromUtf8("FermatButton"));

        horizontalLayout->addWidget(FermatButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        drawArea = new DrawArea(centralWidget);
        drawArea->setObjectName(QString::fromUtf8("drawArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(drawArea->sizePolicy().hasHeightForWidth());
        drawArea->setSizePolicy(sizePolicy);
        drawArea->setMinimumSize(QSize(640, 480));
        drawArea->setBaseSize(QSize(800, 600));

        gridLayout->addWidget(drawArea, 1, 0, 1, 1);

        VertLayout = new QGridLayout();
        VertLayout->setSpacing(6);
        VertLayout->setObjectName(QString::fromUtf8("VertLayout"));
        VertLayout->setSizeConstraint(QLayout::SetMaximumSize);
        CLabel = new QLabel(centralWidget);
        CLabel->setObjectName(QString::fromUtf8("CLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CLabel->sizePolicy().hasHeightForWidth());
        CLabel->setSizePolicy(sizePolicy1);

        VertLayout->addWidget(CLabel, 2, 0, 1, 1);

        BLabel = new QLabel(centralWidget);
        BLabel->setObjectName(QString::fromUtf8("BLabel"));
        sizePolicy1.setHeightForWidth(BLabel->sizePolicy().hasHeightForWidth());
        BLabel->setSizePolicy(sizePolicy1);

        VertLayout->addWidget(BLabel, 1, 0, 1, 1);

        ALine = new QLineEdit(centralWidget);
        ALine->setObjectName(QString::fromUtf8("ALine"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ALine->sizePolicy().hasHeightForWidth());
        ALine->setSizePolicy(sizePolicy2);

        VertLayout->addWidget(ALine, 0, 1, 1, 1);

        CLine = new QLineEdit(centralWidget);
        CLine->setObjectName(QString::fromUtf8("CLine"));
        sizePolicy1.setHeightForWidth(CLine->sizePolicy().hasHeightForWidth());
        CLine->setSizePolicy(sizePolicy1);

        VertLayout->addWidget(CLine, 2, 1, 1, 1);

        drawButton = new QPushButton(centralWidget);
        drawButton->setObjectName(QString::fromUtf8("drawButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(drawButton->sizePolicy().hasHeightForWidth());
        drawButton->setSizePolicy(sizePolicy3);

        VertLayout->addWidget(drawButton, 3, 1, 1, 1);

        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        VertLayout->addWidget(clearButton, 4, 1, 1, 1);

        ALabel = new QLabel(centralWidget);
        ALabel->setObjectName(QString::fromUtf8("ALabel"));

        VertLayout->addWidget(ALabel, 0, 0, 1, 1);

        BLine = new QLineEdit(centralWidget);
        BLine->setObjectName(QString::fromUtf8("BLine"));
        sizePolicy1.setHeightForWidth(BLine->sizePolicy().hasHeightForWidth());
        BLine->setSizePolicy(sizePolicy1);

        VertLayout->addWidget(BLine, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        VertLayout->addItem(verticalSpacer, 5, 1, 1, 1);


        gridLayout->addLayout(VertLayout, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Plot Function", nullptr));
        GergonneButton->setText(QCoreApplication::translate("MainWindow", "Gergonne Point", nullptr));
        NagelButton->setText(QCoreApplication::translate("MainWindow", "Nagel Point", nullptr));
        LemoineButton->setText(QCoreApplication::translate("MainWindow", "Lemoine Point", nullptr));
        FermatButton->setText(QCoreApplication::translate("MainWindow", "Fermat-Torricelli Point", nullptr));
        CLabel->setText(QCoreApplication::translate("MainWindow", "C:", nullptr));
        BLabel->setText(QCoreApplication::translate("MainWindow", "B:", nullptr));
        drawButton->setText(QCoreApplication::translate("MainWindow", "Draw", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        ALabel->setText(QCoreApplication::translate("MainWindow", "A:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
