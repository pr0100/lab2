#pragma once
#include "Node.h"

using namespace std;

class BinaryTree
{
public:
	BinaryTree();
	BinaryTree(const int);
	~BinaryTree();
	void insert(const int);
	TreeNode* search(const int) const;
	void print_tree(TreeNode*, int level);
	TreeNode* get_root() const { return root; }
	void set_root(TreeNode* node) { root = node; };
private:
	TreeNode* root;
	void insert(const int, TreeNode*);
	TreeNode* search(const int, TreeNode*) const;
	void delete_tree(TreeNode*);
};
