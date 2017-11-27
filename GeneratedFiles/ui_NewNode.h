/********************************************************************************
** Form generated from reading UI file 'NewNode.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWNODE_H
#define UI_NEWNODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_NewNode
{
public:
    QFormLayout *formLayout;
    QListWidget *BeaconsList;
    QDialogButtonBox *diagButton;

    void setupUi(QDialog *NewNode)
    {
        if (NewNode->objectName().isEmpty())
            NewNode->setObjectName(QStringLiteral("NewNode"));
        NewNode->resize(297, 239);
        formLayout = new QFormLayout(NewNode);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        BeaconsList = new QListWidget(NewNode);
        new QListWidgetItem(BeaconsList);
        new QListWidgetItem(BeaconsList);
        BeaconsList->setObjectName(QStringLiteral("BeaconsList"));

        formLayout->setWidget(0, QFormLayout::LabelRole, BeaconsList);

        diagButton = new QDialogButtonBox(NewNode);
        diagButton->setObjectName(QStringLiteral("diagButton"));
        diagButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(1, QFormLayout::LabelRole, diagButton);


        retranslateUi(NewNode);
        QObject::connect(diagButton, SIGNAL(rejected()), NewNode, SLOT(reject()));
        QObject::connect(BeaconsList, SIGNAL(itemDoubleClicked(QListWidgetItem*)), NewNode, SLOT(Validate()));
        QObject::connect(diagButton, SIGNAL(accepted()), NewNode, SLOT(Validate()));

        QMetaObject::connectSlotsByName(NewNode);
    } // setupUi

    void retranslateUi(QDialog *NewNode)
    {
        NewNode->setWindowTitle(QApplication::translate("NewNode", "NewNode", Q_NULLPTR));

        const bool __sortingEnabled = BeaconsList->isSortingEnabled();
        BeaconsList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = BeaconsList->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("NewNode", "Window", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = BeaconsList->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("NewNode", "enemy", Q_NULLPTR));
        BeaconsList->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class NewNode: public Ui_NewNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWNODE_H
