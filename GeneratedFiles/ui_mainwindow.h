/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <xmltree.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNouveau;
    QAction *actionOuvrir;
    QAction *actionQuitter;
    QAction *actionEnregistrer;
    QAction *actionEnregistrer_sous;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    XMLTree *mainXMLTree;
    QPushButton *AddButton;
    QPushButton *DelButton;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menutest;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionNouveau = new QAction(MainWindow);
        actionNouveau->setObjectName(QStringLiteral("actionNouveau"));
        actionOuvrir = new QAction(MainWindow);
        actionOuvrir->setObjectName(QStringLiteral("actionOuvrir"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        actionEnregistrer = new QAction(MainWindow);
        actionEnregistrer->setObjectName(QStringLiteral("actionEnregistrer"));
        actionEnregistrer_sous = new QAction(MainWindow);
        actionEnregistrer_sous->setObjectName(QStringLiteral("actionEnregistrer_sous"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mainXMLTree = new XMLTree(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("Nom"));
        mainXMLTree->setHeaderItem(__qtreewidgetitem);
        mainXMLTree->setObjectName(QStringLiteral("mainXMLTree"));

        gridLayout->addWidget(mainXMLTree, 0, 0, 1, 5);

        AddButton = new QPushButton(centralWidget);
        AddButton->setObjectName(QStringLiteral("AddButton"));

        gridLayout->addWidget(AddButton, 1, 0, 1, 1);

        DelButton = new QPushButton(centralWidget);
        DelButton->setObjectName(QStringLiteral("DelButton"));

        gridLayout->addWidget(DelButton, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menutest = new QMenu(menuBar);
        menutest->setObjectName(QStringLiteral("menutest"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menutest->menuAction());
        menuFichier->addAction(actionNouveau);
        menuFichier->addAction(actionOuvrir);
        menuFichier->addAction(actionEnregistrer);
        menuFichier->addAction(actionEnregistrer_sous);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);

        retranslateUi(MainWindow);
        QObject::connect(actionQuitter, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionEnregistrer, SIGNAL(triggered()), MainWindow, SLOT(Save()));
        QObject::connect(actionEnregistrer_sous, SIGNAL(triggered()), MainWindow, SLOT(SaveAs()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "XMLGenerator", Q_NULLPTR));
        actionNouveau->setText(QApplication::translate("MainWindow", "Nouveau", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionNouveau->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionOuvrir->setText(QApplication::translate("MainWindow", "Ouvrir", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionOuvrir->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionQuitter->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionEnregistrer->setText(QApplication::translate("MainWindow", "Enregistrer", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionEnregistrer->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionEnregistrer_sous->setText(QApplication::translate("MainWindow", "Enregistrer sous...", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = mainXMLTree->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "Valeur", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Attributs", Q_NULLPTR));
        AddButton->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        DelButton->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", Q_NULLPTR));
        menutest->setTitle(QApplication::translate("MainWindow", "test", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
