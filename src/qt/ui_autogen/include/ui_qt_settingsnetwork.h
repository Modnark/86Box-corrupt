/********************************************************************************
** Form generated from reading UI file 'qt_settingsnetwork.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSNETWORK_H
#define UI_QT_SETTINGSNETWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsNetwork
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLabel *label;
    QComboBox *comboBoxAdapter;
    QLabel *label_3;
    QPushButton *pushButtonConfigure;
    QComboBox *comboBoxNetwork;
    QComboBox *comboBoxPcap;

    void setupUi(QWidget *SettingsNetwork)
    {
        if (SettingsNetwork->objectName().isEmpty())
            SettingsNetwork->setObjectName(QString::fromUtf8("SettingsNetwork"));
        SettingsNetwork->resize(400, 300);
        gridLayout = new QGridLayout(SettingsNetwork);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        label_2 = new QLabel(SettingsNetwork);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(SettingsNetwork);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBoxAdapter = new QComboBox(SettingsNetwork);
        comboBoxAdapter->setObjectName(QString::fromUtf8("comboBoxAdapter"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxAdapter->sizePolicy().hasHeightForWidth());
        comboBoxAdapter->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxAdapter, 2, 1, 1, 1);

        label_3 = new QLabel(SettingsNetwork);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        pushButtonConfigure = new QPushButton(SettingsNetwork);
        pushButtonConfigure->setObjectName(QString::fromUtf8("pushButtonConfigure"));

        gridLayout->addWidget(pushButtonConfigure, 2, 2, 1, 1);

        comboBoxNetwork = new QComboBox(SettingsNetwork);
        comboBoxNetwork->setObjectName(QString::fromUtf8("comboBoxNetwork"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxNetwork->sizePolicy().hasHeightForWidth());
        comboBoxNetwork->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBoxNetwork, 0, 1, 1, 2);

        comboBoxPcap = new QComboBox(SettingsNetwork);
        comboBoxPcap->setObjectName(QString::fromUtf8("comboBoxPcap"));

        gridLayout->addWidget(comboBoxPcap, 1, 1, 1, 2);


        retranslateUi(SettingsNetwork);

        QMetaObject::connectSlotsByName(SettingsNetwork);
    } // setupUi

    void retranslateUi(QWidget *SettingsNetwork)
    {
        SettingsNetwork->setWindowTitle(QCoreApplication::translate("SettingsNetwork", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("SettingsNetwork", "PCap device:", nullptr));
        label->setText(QCoreApplication::translate("SettingsNetwork", "Network type:", nullptr));
        label_3->setText(QCoreApplication::translate("SettingsNetwork", "Network adapter:", nullptr));
        pushButtonConfigure->setText(QCoreApplication::translate("SettingsNetwork", "Configure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsNetwork: public Ui_SettingsNetwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSNETWORK_H
