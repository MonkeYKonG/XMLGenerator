#include "SetupAttribut.h"
#include "ui_SetupAttribut.h"
#include <qmessagebox.h>

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

void SetupAttribut::verifyValues()
{
	if (ui->Name->text().isEmpty() || ui->Value->text().isEmpty())
		QMessageBox::critical(this, "Impossible de créer l'attribut.", "Un cha;p n'as pas été remplis.");
	else
		accept();
}
