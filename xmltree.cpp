#include "xmltree.h"
#include "my_graph_lib/XMLParser.hpp"
#include <QMessageBox>

XMLTree::XMLTree(QWidget *parent)
    : QTreeWidget(parent)
{

}

void    XMLTree::LoadContent(const std::string & fileName)
{
    try
    {
        m_node = my::XMLParser::Load(fileName);
		for (unsigned i = 0; i < m_node->GetChilds().size(); ++i)
			addTopLevelItem(AddContent(m_node->GetChilds()[i], 0));
    }
    catch (const std::exception & e)
    {
		QMessageBox::information(this, "Erreur!", "Impossible de charger le fichier: " + QString::fromStdString(fileName) + "\n" + QString::fromStdString(e.what()));
		return;
    }
}

my::XMLNode::XMLNodePtr XMLTree::GetEquivalentNode(QTreeWidgetItem * item)
{
	for (unsigned i = 0; i < m_nodeEq.size(); ++i)
		if (m_nodeEq[i].first == item)
			return (m_nodeEq[i].second);
	return (0);
}

QTreeWidgetItem *XMLTree::AddContent(my::XMLNode::XMLNodePtr node, QTreeWidgetItem * root)
{
	QStringList stringList;
	QTreeWidgetItem *newItem;
	QString attributes;

	stringList.push_back(QString::fromStdString(node->GetName()));
	for (unsigned i = 0; i < node->GetContents().size(); ++i)
	{
		if (i)
			attributes += " ";
		attributes += QString::fromStdString(node->GetContents()[i].first) + "=\"" + QString::fromStdString(node->GetContents()[i].second) + "\"";
	}
	stringList.push_back(attributes);
	stringList.push_back(QString::fromStdString(node->GetValue()));
	if (!root)
		newItem = new QTreeWidgetItem(this, stringList);
	else
		newItem = new QTreeWidgetItem(root, stringList);
	for (unsigned i = 0; i < node->GetChilds().size(); ++i)
		newItem->addChild(AddContent(node->GetChilds()[i], newItem));
	m_nodeEq.push_back(std::pair<QTreeWidgetItem *, my::XMLNode::XMLNodePtr>(newItem, node));
	return (newItem);
}
