#pragma once

#include "my_graph_lib/XMLNode.hpp"
#include <QDialog>
#include <qlistwidget.h>
namespace Ui { class NewNode; };

class NewNode : public QDialog
{
	Q_OBJECT

public:
	NewNode(QWidget *parent = Q_NULLPTR);
	~NewNode();

	my::XMLNode::XMLNodePtr GetNode();

public slots:
	void Validate();

private:
	Ui::NewNode *ui;
};
