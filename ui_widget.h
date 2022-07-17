/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QWidget *centerWidget;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QListWidget *randList;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *bubbleList;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *quickList;
    QSpacerItem *horizontalSpacer;
    QPushButton *startBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1029, 687);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        centerWidget = new QWidget(Widget);
        centerWidget->setObjectName(QStringLiteral("centerWidget"));
        horizontalLayout_4 = new QHBoxLayout(centerWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox = new QGroupBox(centerWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        randList = new QListWidget(groupBox);
        randList->setObjectName(QStringLiteral("randList"));

        horizontalLayout->addWidget(randList);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centerWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        bubbleList = new QListWidget(groupBox_2);
        bubbleList->setObjectName(QStringLiteral("bubbleList"));

        horizontalLayout_2->addWidget(bubbleList);


        horizontalLayout_4->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centerWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        quickList = new QListWidget(groupBox_3);
        quickList->setObjectName(QStringLiteral("quickList"));

        horizontalLayout_3->addWidget(quickList);


        horizontalLayout_4->addWidget(groupBox_3);


        gridLayout->addWidget(centerWidget, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(447, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        startBtn = new QPushButton(Widget);
        startBtn->setObjectName(QStringLiteral("startBtn"));

        gridLayout->addWidget(startBtn, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(447, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\351\232\217\346\234\272\346\225\260", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "\345\206\222\346\263\241\346\216\222\345\272\217", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "\345\277\253\351\200\237\346\216\222\345\272\217", Q_NULLPTR));
        startBtn->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
