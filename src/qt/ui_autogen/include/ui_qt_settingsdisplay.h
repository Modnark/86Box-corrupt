/********************************************************************************
** Form generated from reading UI file 'qt_settingsdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.15.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_SETTINGSDISPLAY_H
#define UI_QT_SETTINGSDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDisplay
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboBoxVideo;
    QLabel *label;
    QPushButton *pushButtonConfigure;
    QPushButton *pushButtonConfigureVoodoo;
    QCheckBox *checkBoxVoodoo;
    QCheckBox *checkBox8514;
    QPushButton *pushButtonConfigureXga;
    QCheckBox *checkBoxXga;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SettingsDisplay)
    {
        if (SettingsDisplay->objectName().isEmpty())
            SettingsDisplay->setObjectName(QString::fromUtf8("SettingsDisplay"));
        SettingsDisplay->resize(400, 300);
        gridLayout = new QGridLayout(SettingsDisplay);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBoxVideo = new QComboBox(SettingsDisplay);
        comboBoxVideo->setObjectName(QString::fromUtf8("comboBoxVideo"));

        gridLayout->addWidget(comboBoxVideo, 0, 1, 1, 1);

        label = new QLabel(SettingsDisplay);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButtonConfigure = new QPushButton(SettingsDisplay);
        pushButtonConfigure->setObjectName(QString::fromUtf8("pushButtonConfigure"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonConfigure->sizePolicy().hasHeightForWidth());
        pushButtonConfigure->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonConfigure, 0, 2, 1, 1);

        pushButtonConfigureVoodoo = new QPushButton(SettingsDisplay);
        pushButtonConfigureVoodoo->setObjectName(QString::fromUtf8("pushButtonConfigureVoodoo"));

        gridLayout->addWidget(pushButtonConfigureVoodoo, 1, 2, 1, 1);

        checkBoxVoodoo = new QCheckBox(SettingsDisplay);
        checkBoxVoodoo->setObjectName(QString::fromUtf8("checkBoxVoodoo"));

        gridLayout->addWidget(checkBoxVoodoo, 1, 0, 1, 2);

        checkBox8514 = new QCheckBox(SettingsDisplay);
        checkBox8514->setObjectName(QString::fromUtf8("checkBox8514"));

        gridLayout->addWidget(checkBox8514, 2, 0, 1, 2);

        pushButtonConfigureXga = new QPushButton(SettingsDisplay);
        pushButtonConfigureXga->setObjectName(QString::fromUtf8("pushButtonConfigureXga"));

        gridLayout->addWidget(pushButtonConfigureXga, 3, 2, 1, 1);

        checkBoxXga = new QCheckBox(SettingsDisplay);
        checkBoxXga->setObjectName(QString::fromUtf8("checkBoxXga"));

        gridLayout->addWidget(checkBoxXga, 3, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);


        retranslateUi(SettingsDisplay);

        QMetaObject::connectSlotsByName(SettingsDisplay);
    } // setupUi

    void retranslateUi(QWidget *SettingsDisplay)
    {
        SettingsDisplay->setWindowTitle(QCoreApplication::translate("SettingsDisplay", "Form", nullptr));
        label->setText(QCoreApplication::translate("SettingsDisplay", "Video:", nullptr));
        pushButtonConfigure->setText(QCoreApplication::translate("SettingsDisplay", "Configure", nullptr));
        pushButtonConfigureVoodoo->setText(QCoreApplication::translate("SettingsDisplay", "Configure", nullptr));
        checkBoxVoodoo->setText(QCoreApplication::translate("SettingsDisplay", "Voodoo Graphics", nullptr));
        checkBox8514->setText(QCoreApplication::translate("SettingsDisplay", "8514/A", nullptr));
        pushButtonConfigureXga->setText(QCoreApplication::translate("SettingsDisplay", "Configure", nullptr));
        checkBoxXga->setText(QCoreApplication::translate("SettingsDisplay", "XGA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDisplay: public Ui_SettingsDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_SETTINGSDISPLAY_H
