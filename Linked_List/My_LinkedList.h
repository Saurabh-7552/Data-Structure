#pragma once
#include<iostream>
#include "My_Node.h"
class My_LinkedList
{
	My_Node* head;
   public:
	My_LinkedList()
	{
		head = NULL;
	}
	void Insert(int data)
	{
		My_Node* temp = new My_Node;
		temp->next = NULL;
		temp->data = data;
		if (head == NULL)					//Inserting first element
		{                                      
			head = temp;                       
			return;
		}
		My_Node* first = head;
		while (first->next != NULL)
		{
			first = first->next;
		}
		first->next = temp;

	}
	bool delete_Node(int data)
	{
		My_Node* first = head,*back=NULL;
		if (first->data == data)             //if data present in head
		{
			head = head->next;
			delete(first);
			return true;
		}
		bool found = false;
		while (first != NULL)
		{
			if (first->data == data)
			{
				found = true;
				break;
			}
			back = first;
			first = first->next;
		}
		if (!found)                       //If data not found
		{
			return false;
		}
		else
		{
			back->next = first ->next;
		}
	}
	void display()
	{
		My_Node* first = head;
		if (first == NULL)
		{
			std::cout << "The List is Empty" <<std::endl;
			return;
		}
		while (first)
		{
			std::cout << first->data << "->";
			first = first->next;
		}
		std::cout << std::endl;
	}
	void find_Middle()
	{
		My_Node* fast_pointer = head, * slow_pointer = head;
		if (head != NULL)
		{
			while (fast_pointer != NULL && fast_pointer->next !=NULL)
			{
				fast_pointer = fast_pointer->next->next;
				slow_pointer = slow_pointer->next;
			}
			std::cout << "The middle element is " << slow_pointer->data << std::endl;
		}
		else
			std::cout << "The List is empty " << std::endl;
	}
	void reverse_list()
	{
		My_Node* temp = head,*back=NULL,*front=temp->next;
		while (front != NULL)
		{
			temp->next = back;
			back = temp;
			temp = front;
			front = front->next;
		}
		temp->next = back;
		head = temp;

	}

};

