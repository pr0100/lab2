#pragma once
#include"BinaryTree.h"

using namespace std;

TreeNode* CreateMinimalBST(int* arr, int first, int final)
{
	if (final < first)
		return nullptr;
	int middle = (first + final) / 2;
	TreeNode* node = new TreeNode(arr[middle]);
	node->set_left(CreateMinimalBST(arr, first, middle - 1));
	node->set_right(CreateMinimalBST(arr, middle + 1, final));
	return node;
}
