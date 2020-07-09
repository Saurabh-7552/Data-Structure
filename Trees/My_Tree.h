#pragma once
#include<iostream>
#include "My_Node.h"
class My_Tree
{
	My_Node* root;

public:
	
	My_Node* get_root()
	{
		return this->root;
	}
	My_Tree()
	{
		root = NULL;
	}
	void insert(int data)
	{
		My_Node* temp = new My_Node;

		temp->data = data;
		temp->right = NULL;
		temp->left = NULL;
		if (root == NULL)
		{
			root = temp;
			return;
		}
		My_Node* first = root;
		while (first != NULL)
		{
			if (first->data < temp->data)
			{
				if (first->right == NULL)
				{
					first->right = temp;
					break;
				}
				else
					first = first->right;
			}
			else
			{
				if (first->left == NULL)
				{
					first->left = temp;
					break;
				}
				else
					first = first->left;

			}
		}

	}
	void pre_order(My_Node* root)
	{
		if (root == NULL)
		{
			return;
	    }
		else
		{
			std::cout << root->data<<"->";
			pre_order(root->left);
			pre_order(root->right);
		}
	}
	void in_order(My_Node* root)
	{
		if (root == NULL)
		{
			return;
		}
		else
		{
			in_order(root->left);
			std::cout << root->data << "->";
			in_order(root->right);
		}
	}
	void post_order(My_Node* root)
	{
		if (root == NULL)
		{
			return;
		}
		else
		{
			post_order(root->left);
			post_order(root->right);
			std::cout << root->data << "->";
		}
	}
	bool search(int data)
	{
		My_Node* temp = root;
		bool found = false;
		while (temp!=NULL)
		{
			if (temp->data == data)
			{
				found = true;
				break;
			}
			else
			{
				if (data > temp->data)
				{
					temp = temp->right;
				}
				else
				{
					temp = temp->left;
				}
			}

		}
		return found;
	}
	//TODO Deletion, Mirror of a tree, Height of a tree
	int count_nodes(My_Node* temp)
	{
		int count = 0;
		if (temp == NULL)
		{
			return 0;
		}
		count = 1 + count_left(temp->left);
		count = count + count_left(temp->right);
		
		return count;
	     
	}
	int count_left(My_Node* temp)
	{
		return count_nodes(temp->left);
	
	}
	void level_Order(My_Node* node, int level)
	{
		if (node == NULL)
		{
			return;
		}
		if (level == 1)
		{
			std::cout << node->data<<" ";
		}
		level_Order(node->left, level - 1);
		level_Order(node->right, level - 1);
	}
	int height(My_Node* currrent_node)
	{
		if (currrent_node == NULL)
			return 0;
		int LeftCount =  height(currrent_node->left);
		int RightCount = height(currrent_node->right);
		if (LeftCount > RightCount)
			return LeftCount + 1;
		else
			return RightCount + 1;
	}
	void AllLevel_Element()
	{
		for (int i = 1; i <= this->height(this->get_root()); ++i)
		{
			level_Order(this->get_root(), i);
			std::cout << std::endl;
		}
	}
};

