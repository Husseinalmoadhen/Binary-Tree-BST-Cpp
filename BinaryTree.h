#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include<memory>
#include<queue>
#include<iostream>

struct Node{
	int data;
	std::unique_ptr<Node> left;
	std::unique_ptr<Node> right;
	Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree{
	private:
	std::unique_ptr<Node> root;

	void PrintPreorder(const Node* node) const;
	void PrintInorder(const Node* node) const;
	void PrintPostorder(const Node* node) const;

	void InsertNodeRec(std::unique_ptr<Node>& node, int data);
	bool BSTSearch(int value, const Node* node) const;
	void DeleteNodeBST(std::unique_ptr<Node>& node, int value);

	public:
	BinaryTree() : root(nullptr) {}

	void InsertNodeIter(int data);
	void InsertNodeRec(int data);
	void DeleteTree();
	void DeleteNodeBST(int value);

	void PrintPreorder() const;
	void PrintInorder() const;
	void PrintPostorder() const;
	void PrintLevelOrder() const;

	bool BSTSearch(int value) const;
};

#endif