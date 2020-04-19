#pragma once

using namespace std;

class TreeNode
{
public:
	TreeNode();
	TreeNode(const int);
	int get_data() { return data; }
	TreeNode* get_left() const { return left; }
	TreeNode* get_right() const { return right; }
	TreeNode* get_parent() const { return parent; }
	void set_left(TreeNode* value) { left = value; }
	void set_right(TreeNode* value) { right = value; }
	void set_parent(TreeNode* value) { parent = value; }
private:
	TreeNode* parent;
	TreeNode* left;
	TreeNode* right;
	int data;
};

inline TreeNode::TreeNode()
{
	int data = 0;
	left = right = parent = nullptr;
}

inline TreeNode::TreeNode(const int Data)
{
	data = Data;
	left = right = nullptr;
}