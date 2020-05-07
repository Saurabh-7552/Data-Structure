#pragma once
#include<iostream>
#include "My_Node.h"
class doublyList
{
	My_Node* head;
	public:
	doublyList()
	{
		head = nullptr;
	}
	void Insert(int data)
	{
		My_Node* temp = new My_Node;
		temp->data = data;
		temp->next = temp->prev = nullptr;
		if (head == nullptr)
		{
			head = temp;
			return;
		}
		My_Node* first = head;
		while (first->next != nullptr)
		{
			first = first->next;
		}
		first->next = temp;
		temp->prev = first;

	}
	bool delete_Node(int data)
	{
		
		My_Node* temp = head;
		if (head == NULL)
			return false;
		if (temp->data == data)
		{
			head = head->next;					//deletion of head
			head->prev = NULL;
			return true;
		}
		
		while (temp->next != NULL)
		{
			if (temp->data == data)					//deletion between the Node
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				delete(temp);
				return true;
			}
			temp = temp->next;
		}
		if (temp->data == data)                    //delete last node
		{
			temp = NULL;
			delete(temp);
			return true;
		}
		return false;
	}
	void display()
	{
		if (head == NULL)
		{
			std::cout << "The List is emty " << std::endl;
			return;
		}
		My_Node* temp = head;
		while (temp!=NULL)
		{
			std::cout << temp->data << " -> ";
			temp = temp->next;
		}
		std::cout << std::endl;
	}
	void reverse_list()
	{
		My_Node* current = head, * front = current->next,*back=NULL;
		while (front!= NULL)
		{
			current -> next = back;
			if (current != head)
				back->prev = current;
			back = current;
			current = front;
			front = front->next;
		}
		current->next = back;
		back->prev = current;
		head = current;
	}
};

