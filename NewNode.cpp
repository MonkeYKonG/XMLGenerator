#include "NewNode.h"
#include "ui_NewNode.h"
#include "qmessagebox.h"

NewNode::NewNode(QWidget *parent)
	: QDialog(parent)
{
	ui = new Ui::NewNode();
	ui->setupUi(this);
}

NewNode::~NewNode()
{
	delete ui;
}

void NewNode::Validate()
{
	if (ui->BeaconsList->selectedItems().isEmpty())
		QMessageBox::critical(this, "Impossible de creer une nouvelle node.", "Aucun type selectionne.");
	else
		accept();
}

my::XMLNode::XMLNodePtr NewNode::GetNode()
{
	my::XMLNode::XMLNodePtr node;

	node = my::XMLNode::create();
	node->SetName(ui->BeaconsList->selectedItems()[0]->text().toStdString());
	return (node);
}