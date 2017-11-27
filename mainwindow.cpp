#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "NodeValues.h"
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_mainXMLTree_itemDoubleClicked(QTreeWidgetItem * item, int index)
{
	NodeValuesDialog values(this);

	values.SetRoot(ui->mainXMLTree->GetEquivalentNode(item));
	values.exec();
}

void MainWindow::on_actionOuvrir_triggered()
{
    QString fileName;

    fileName = QFileDialog::getOpenFileName(this, "Ouvrir un fichier", QString(), "XMLFiles (*.xml)");
    if (fileName != "")
        ui->mainXMLTree->LoadContent(fileName.toStdString());
}
