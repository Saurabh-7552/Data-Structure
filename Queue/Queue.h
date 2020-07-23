#pragma once
#include<iostream>
#include "My_Node.h"
class My_Queue
{
	My_Node* head, * last;
	
	int my_dequeue()
	{
		if (head == NULL)                                     
		{
			return 0;
		}
		if (head == last)										
		{
			My_Node* temp = head;
			head = last = NULL;
			return temp->data;
		}
		My_Node* temp = head;                                   
		head = head->next;
		return temp->data;
	}
    public:
	My_Queue()
	{
		head = last = NULL;
	}
	bool isEmpty()
	{
		if (head == NULL)
			return true;
		else
			return false;
	}

	void Enqueue(int data)
	{
		My_Node* temp = new My_Node;
		temp->data = data;
		temp->next = NULL;
		if (last == NULL)
		{
			head = last = temp;
			return;
		}
		last->next = temp;
		last = temp;

	}
	bool Dequeue()
	{

		if (head == NULL)                                       //Queue is Empty
		{
			std::cout << " Queue is underflow " << std::endl;
			return false;
		}
		if (head == last)										//Queue has only one element
		{
			std::cout << head->data << " is deleted" << std::endl;
			head = last = NULL;
			return true;
		}
		My_Node* temp = head;                                   //removing first element
		std::cout << temp->data << " is deleted" << std::endl;
		head = head->next;
		delete(temp);
		return true;
	}
	void display()
	{
		if (head == NULL)
		{
			std::cout << "The Queue is Empty";
			return;
		}
		My_Node* temp = head;
		while (temp != last)
		{
			std::cout << temp->data << " -> ";
			temp = temp->next;
		}
		std::cout << temp->data << std::endl;
	}
	/*Recursive method to reverse the Queue - it can also done by explicit stacks(as recursion is also a stack implmentation)*/
	void reverse()
	{
		if (isEmpty())
		{
			return;
		}
		int a = this->my_dequeue();
		reverse();
		this->Enqueue(a);
	}
	void find_Middle()
	{
		My_Node* fast_pointer = head, * slow_pointer = head;
		if (head != NULL && head != last)
		{
			while (fast_pointer != NULL && fast_pointer->next != NULL)
			{
				fast_pointer = fast_pointer->next->next;
				slow_pointer = slow_pointer->next;
			}
			std::cout << "The middle element is " << slow_pointer->data << std::endl;
		}
		else if (head == last)
		{
			std::cout << "The middle element is " << head->data << std::endl;
		}
		else
			std::cout << "The Queue is empty " << std::endl;
	}
};



