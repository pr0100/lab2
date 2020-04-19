#include <iostream>
#include "BinaryTree.h"
#include "MinimalBST.h"

/*	
	Strelkov 
	RI-280002
*/

using namespace std;;

void TestCreateMinimalBST()
{
	const int num = 7;
	int arr[7] = { -10, -5, 0, 3, 7, 10, 15};
	BinaryTree tree = BinaryTree();
	tree.set_root(CreateMinimalBST(arr, 0, num - 1));
	tree.print_tree(tree.get_root(), 0);
	cout << endl;
}

void TestBinaryTree()
{
	BinaryTree tree = BinaryTree(3);
	tree.insert(1);
	tree.insert(5);
	tree.insert(-2);
	tree.insert(2);
	tree.insert(10);
	tree.print_tree(tree.get_root(), 0);
}

int main()
{
	TestCreateMinimalBST();
	TestBinaryTree();
}