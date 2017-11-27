#pragma once

#include <QDialog>
namespace Ui { class SetupAttribut; };

class SetupAttribut : public QDialog
{
	Q_OBJECT

public:
	SetupAttribut(QWidget *parent = Q_NULLPTR);
	~SetupAttribut();

	QString GetName() const;
	QString GetValue() const;

public slots:
	void verifyValues();

private:
	Ui::SetupAttribut *ui;
};
