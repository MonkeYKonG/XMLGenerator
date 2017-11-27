#ifndef XMLTREE_H
#define XMLTREE_H

#include <QTreeWidget>
#include "my_graph_lib/XMLNode.hpp"

class XMLTree : public QTreeWidget
{
public:
    XMLTree(QWidget * parent = 0);

    void LoadContent(const std::string & fileName);
	void LoadContent(my::XMLNode::XMLNodePtr node);
	my::XMLNode::XMLNodePtr GetEquivalentNode(QTreeWidgetItem * item);
	void UpdateItem(QTreeWidgetItem * item, my::XMLNode::XMLNodePtr node);
	my::XMLNode::XMLNodePtr GetRoot() const;

public slots:
	void AddNewChild();
	void DelCurrentNode();

private:
	QTreeWidgetItem *AddContent(my::XMLNode::XMLNodePtr node, QTreeWidgetItem * root);

    my::XMLNode::XMLNodePtr m_node;
	std::vector < std::pair<QTreeWidgetItem *, my::XMLNode::XMLNodePtr> > m_nodeEq;
};

#endif // XMLTREE_H
