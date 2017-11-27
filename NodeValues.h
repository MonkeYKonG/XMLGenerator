#pragma once

#include "ui_DialogButtonRight.h"
#include <QDialog>
#include "my_graph_lib/XMLNode.hpp"

class NodeValuesDialog : public QDialog
{
	Q_OBJECT

public:
	explicit NodeValuesDialog(QWidget * parent = 0);
	~NodeValuesDialog();

	void SetRoot(my::XMLNode::XMLNodePtr root) throw (std::invalid_argument);

public slots:
	void on_Add_Attribut_clicked();

private:
	Ui::NodeValues *ui;
	my::XMLNode::XMLNodePtr m_root;
};