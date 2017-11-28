#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "NodeValues.h"
#include "NewNode.h"
#include <QFileDialog>
#include <QMessageBox>
#include <fstream>

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
	my::XMLNode::XMLNodePtr node;

	node = ui->mainXMLTree->GetEquivalentNode(item);
	values.SetRoot(node);
	if (values.exec())
		ui->mainXMLTree->UpdateItem(item, node);
}

void MainWindow::on_AddButton_clicked()
{
	ui->mainXMLTree->AddNewChild();
}

void MainWindow::on_DelButton_clicked()
{
	ui->mainXMLTree->DelCurrentNode();
}

void MainWindow::on_actionOuvrir_triggered()
{
    m_fileName = QFileDialog::getOpenFileName(this, "Ouvrir un fichier", QString(), "XMLFiles (*.xml)");
    if (!m_fileName.isEmpty())
        ui->mainXMLTree->LoadContent(m_fileName.toStdString());
}

void MainWindow::on_actionNouveau_triggered()
{
	NewNode newNodeGui(this);

	if (newNodeGui.exec())
		ui->mainXMLTree->LoadContent(newNodeGui.GetNode());
}

void MainWindow::Save()
{
	std::ofstream ofs(m_fileName.toStdString(), std::ios::out | std::ios::trunc);

	if (!ofs)
		SaveAs();
	ofs << ui->mainXMLTree->GetRoot()->ToString();
}

void MainWindow::SaveAs()
{
	m_fileName = QFileDialog::getSaveFileName(this, "Enregistrement un fichier", QString(), "XMLFiles (*.xml)");
	Save();
}