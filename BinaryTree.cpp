#include <iostream>
#include "BinaryTree.h"

using namespace std;

BinaryTree::BinaryTree()
{
	root = new TreeNode();
}

BinaryTree::BinaryTree(const int Data)
{
	root = new TreeNode(Data);
}

BinaryTree::~BinaryTree()
{
	delete_tree(root);
}


void BinaryTree::insert(const int val, TreeNode* node)
{
	if (val < node->get_data())
	{
		if (node->get_left() == nullptr)
			node->set_left(new TreeNode(val));
		else
			this->insert(val, node->get_left());
	}
	else
	{
		if (node->get_right() == nullptr)
			node->set_right(new TreeNode(val));
		else
			this->insert(val, node->get_right());
	}
}

void BinaryTree::insert(const int val)
{
	if (root == nullptr)
		this->root = new TreeNode(val);
	else
		this->insert(val, this->root);
}

TreeNode* BinaryTree::search(const int val, TreeNode* node) const
{
	if (node == nullptr || val == node->get_data())
		return node;
	if (val > node->get_data())
		return search(val, node->get_right());
	else
		return search(val, node->get_left());
}

TreeNode* BinaryTree::search(const int val) const
{
	return search(val, root);
}

void BinaryTree::delete_tree(TreeNode* node)
{
	if (node != nullptr)
	{
		delete_tree(node->get_left());
		delete_tree(node->get_right());
		delete node;
	}
	root = nullptr;
}

void BinaryTree::print_tree(TreeNode* node, int level)
{
	if (node != nullptr)
	{
		print_tree(node->get_right(), level + 1);
		for (int i = 0; i < level; i++)
			cout << "   ";
		cout << node->get_data() << endl;
		print_tree(node->get_left(), level + 1);
	}
}