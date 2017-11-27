#include "SetupAttribut.h"
#include "ui_SetupAttribut.h"

SetupAttribut::SetupAttribut(QWidget *parent)
	: QDialog(parent)
{
	ui = new Ui::SetupAttribut();
	ui->setupUi(this);
}

SetupAttribut::~SetupAttribut()
{
	delete ui;
}

QString SetupAttribut::GetName() const
{
	return ui->Name->text();
}

QString SetupAttribut::GetValue() const
{
	return ui->Value->text();
}
