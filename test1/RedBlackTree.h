#pragma once
#include <iostream>

template<class T>
class RedBlackTreeNode {
public:
	RedBlackTreeNode(T data, is_red, left, right) :data(data), is_red(is_red), left(left), right(right) {};
private:
	T data;
	bool is_red;
	RedBlackTree* left;
	RedBlackTree* right;
};

template<class T>
class RedBlackTree
{
	friend istream& operator>>(istream& is,T data);
	friend ostream& operator<<(ostream& os);
public:
	RedBlackTree(T data) {
		root = RedBlackTreeNode<T>(data, false, nullptr, nullptr);
	}
	~RedBlackTree()=default;
private:
	RedBlackTreeNode<T> root;
};

