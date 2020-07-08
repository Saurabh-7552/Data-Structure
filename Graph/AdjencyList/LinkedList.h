#pragma once
#include "Node.h"
#include<iostream>
class LinkedList
{
    Node* head;
public:
    LinkedList()
    {
        head = NULL;
    }
    void insert(int data)
    {
        Node* temp = new Node;
        temp->data = data;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            return;
        }
        Node* first = head;
        while (first->next != NULL)
        {
            first = first->next;
        }
        first->next = temp;
    }
    void display(int i)
    {
        std::cout << i;
        Node* temp = head;
        while (temp != NULL)
        {
            std::cout << "-> " << temp->data;
            temp = temp -> next;
        }
        std::cout << std::endl;
    }
};

