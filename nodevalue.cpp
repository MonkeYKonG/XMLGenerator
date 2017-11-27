#include "NodeValues.h"
#include "ui_DialogButtonRight.h"
#include "SetupAttribut.h"

NodeValuesDialog::NodeValuesDialog(QWidget * parent)
	: QDialog(parent),
	ui(new Ui::NodeValues())
{
	ui->setupUi(this);
}

NodeValuesDialog::~NodeValuesDialog()
{
	delete (ui);
}

void NodeValuesDialog::SetRoot(my::XMLNode::XMLNodePtr root) throw(std::invalid_argument)
{
	if (!root)
		throw (std::invalid_argument("Invalid root"));
	m_root = root;
	ui->Name->setText(QString::fromStdString(m_root->GetName()));
	ui->Value->setPlainText(QString::fromStdString(m_root->GetValue()));
	for (unsigned i = 0; i < m_root->GetContents().size(); ++i)
	{
		ui->AttributsTable->insertRow(ui->AttributsTable->rowCount());
		ui->AttributsTable->setVerticalHeaderItem(ui->AttributsTable->rowCount() - 1, new QTableWidgetItem(QString::fromStdString(m_root->GetContents()[i].first)));
		ui->AttributsTable->setItem(ui->AttributsTable->rowCount() - 1, 0, new QTableWidgetItem(QString::fromStdString(m_root->GetContents()[i].second)));
	}
}

void NodeValuesDialog::on_Add_Attribut_clicked()
{
	SetupAttribut setupAtt(this);

	if (setupAtt.exec())
	{
		ui->AttributsTable->insertRow(ui->AttributsTable->rowCount());
		ui->AttributsTable->setVerticalHeaderItem(ui->AttributsTable->rowCount() - 1, new QTableWidgetItem(setupAtt.GetName()));
		ui->AttributsTable->setItem(ui->AttributsTable->rowCount() - 1, 0, new QTableWidgetItem(setupAtt.GetValue()));
	}
}

void NodeValuesDialog::UpdateNode()
{
	if (!ui->Name->text().isEmpty())
		m_root->SetName(ui->Name->text().toStdString());
	if (!ui->Value->toPlainText().isEmpty())
		m_root->SetValue(ui->Value->toPlainText().toStdString());
	for (unsigned i = 0; i < ui->AttributsTable->rowCount(); ++i)
	{
		if (i < m_root->GetContents().size())
		{
			//m_root->GetContents()[i].first = ui->AttributsTable->item(i, 0)->text().toStdString();
		}
		else
			m_root->AddAttribute(my::XMLNode::NodeContent(ui->AttributsTable->verticalHeaderItem(i)->text().toStdString(), ui->AttributsTable->item(i, 0)->text().toStdString()));
	}
	accept();
}