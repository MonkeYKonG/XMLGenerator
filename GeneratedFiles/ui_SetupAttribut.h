/********************************************************************************
** Form generated from reading UI file 'SetupAttribut.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPATTRIBUT_H
#define UI_SETUPATTRIBUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_SetupAttribut
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Value;
    QLineEdit *Name;
    QDialogButtonBox *DiagButton;

    void setupUi(QDialog *SetupAttribut)
    {
        if (SetupAttribut->objectName().isEmpty())
            SetupAttribut->setObjectName(QStringLiteral("SetupAttribut"));
        SetupAttribut->resize(256, 99);
        formLayout = new QFormLayout(SetupAttribut);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(SetupAttribut);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        label_2 = new QLabel(SetupAttribut);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        Value = new QLineEdit(SetupAttribut);
        Value->setObjectName(QStringLiteral("Value"));

        formLayout->setWidget(2, QFormLayout::FieldRole, Value);

        Name = new QLineEdit(SetupAttribut);
        Name->setObjectName(QStringLiteral("Name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, Name);

        DiagButton = new QDialogButtonBox(SetupAttribut);
        DiagButton->setObjectName(QStringLiteral("DiagButton"));
        DiagButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(3, QFormLayout::FieldRole, DiagButton);


        retranslateUi(SetupAttribut);
        QObject::connect(DiagButton, SIGNAL(accepted()), SetupAttribut, SLOT(accept()));
        QObject::connect(DiagButton, SIGNAL(rejected()), SetupAttribut, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetupAttribut);
    } // setupUi

    void retranslateUi(QDialog *SetupAttribut)
    {
        SetupAttribut->setWindowTitle(QApplication::translate("SetupAttribut", "SetupAttribut", Q_NULLPTR));
        label->setText(QApplication::translate("SetupAttribut", "Valeur:", Q_NULLPTR));
        label_2->setText(QApplication::translate("SetupAttribut", "Nom:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetupAttribut: public Ui_SetupAttribut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPATTRIBUT_H
