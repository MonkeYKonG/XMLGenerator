/********************************************************************************
** Form generated from reading UI file 'DialogButtonRight.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBUTTONRIGHT_H
#define UI_DIALOGBUTTONRIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NodeValues
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *vboxLayout;
    QGroupBox *ChildrenBox;
    QGroupBox *AttributBox;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *AttributsTable;
    QVBoxLayout *verticalLayout_5;
    QPushButton *Del_Attribut;
    QPushButton *Add_Attribut;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *NodeBox;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *Name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QTextEdit *Value;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QDialogButtonBox *diagButton;

    void setupUi(QDialog *NodeValues)
    {
        if (NodeValues->objectName().isEmpty())
            NodeValues->setObjectName(QStringLiteral("NodeValues"));
        NodeValues->resize(400, 511);
        verticalLayout = new QVBoxLayout(NodeValues);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setSizeConstraint(QLayout::SetMinimumSize);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        ChildrenBox = new QGroupBox(NodeValues);
        ChildrenBox->setObjectName(QStringLiteral("ChildrenBox"));

        vboxLayout->addWidget(ChildrenBox);

        AttributBox = new QGroupBox(NodeValues);
        AttributBox->setObjectName(QStringLiteral("AttributBox"));
        horizontalLayout_4 = new QHBoxLayout(AttributBox);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        AttributsTable = new QTableWidget(AttributBox);
        if (AttributsTable->columnCount() < 1)
            AttributsTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        AttributsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        AttributsTable->setObjectName(QStringLiteral("AttributsTable"));

        horizontalLayout_4->addWidget(AttributsTable);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        Del_Attribut = new QPushButton(AttributBox);
        Del_Attribut->setObjectName(QStringLiteral("Del_Attribut"));

        verticalLayout_5->addWidget(Del_Attribut);

        Add_Attribut = new QPushButton(AttributBox);
        Add_Attribut->setObjectName(QStringLiteral("Add_Attribut"));

        verticalLayout_5->addWidget(Add_Attribut);


        horizontalLayout_4->addLayout(verticalLayout_5);


        vboxLayout->addWidget(AttributBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        NodeBox = new QGroupBox(NodeValues);
        NodeBox->setObjectName(QStringLiteral("NodeBox"));
        horizontalLayout_5 = new QHBoxLayout(NodeBox);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        label = new QLabel(NodeBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        Name = new QLineEdit(NodeBox);
        Name->setObjectName(QStringLiteral("Name"));

        horizontalLayout_2->addWidget(Name);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(NodeBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        Value = new QTextEdit(NodeBox);
        Value->setObjectName(QStringLiteral("Value"));
        Value->setAutoFillBackground(false);

        horizontalLayout_3->addWidget(Value);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_2->addWidget(NodeBox);


        vboxLayout->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        diagButton = new QDialogButtonBox(NodeValues);
        diagButton->setObjectName(QStringLiteral("diagButton"));
        diagButton->setLayoutDirection(Qt::LeftToRight);
        diagButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(diagButton);


        horizontalLayout->addLayout(verticalLayout_3);


        vboxLayout->addLayout(horizontalLayout);


        verticalLayout->addLayout(vboxLayout);


        retranslateUi(NodeValues);
        QObject::connect(AttributsTable, SIGNAL(cellDoubleClicked(int,int)), NodeValues, SLOT(OpenAttribut(int,int)));

        QMetaObject::connectSlotsByName(NodeValues);
    } // setupUi

    void retranslateUi(QDialog *NodeValues)
    {
        NodeValues->setWindowTitle(QApplication::translate("NodeValues", "Dialog", Q_NULLPTR));
        ChildrenBox->setTitle(QApplication::translate("NodeValues", "Enfants", Q_NULLPTR));
        AttributBox->setTitle(QApplication::translate("NodeValues", "Attributs", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = AttributsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("NodeValues", "Valeur", Q_NULLPTR));
        Del_Attribut->setText(QApplication::translate("NodeValues", "Supprimer", Q_NULLPTR));
        Add_Attribut->setText(QApplication::translate("NodeValues", "Ajouter", Q_NULLPTR));
        NodeBox->setTitle(QApplication::translate("NodeValues", "Node", Q_NULLPTR));
        label->setText(QApplication::translate("NodeValues", "Nom:", Q_NULLPTR));
        label_2->setText(QApplication::translate("NodeValues", "Valeur:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NodeValues: public Ui_NodeValues {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBUTTONRIGHT_H
