#pragma once
#include<iostream>
class Circular_Queue
{
	const int size = 10;
	int head = -1, last = -1;
	int* arr = new int[size];
	bool isEmpty()
	{
		if (last == -1)
			return true;
		else
			return false;
	}
public:
	
	void insert(int data)
	{  
		if ((last+1)%size!=head)
			{
			last = (last + 1) % size;
			arr[last] = data;
			if (head < 0)
				head = 0;
		}
		else
		{
			std::cout << "OverFlow " << std::endl;
		}
	}
	bool remove()
	{
		if (!isEmpty())
		{
			if (head == last)
			{
				std::cout << "The deleted item is " << arr[head] << std::endl;
				head = last = -1;
				return true;
			}
			std::cout << "The deleted item is " << arr[head]<<std::endl;
			head = (head + 1) % size;
			return true;
		}
		else
			return false;
	}
	void display()
	{
		if (head == -1)
		{
			std::cout << "The Queue is Empty " << std::endl;
			return;
		}
		int first = head;
		while (first != last)
		{
			std::cout << arr[first] << "->";
			first = (first + 1) % size;
		}
		std::cout << arr[first]<<std::endl;
	}
	void find_Middle()
	{
		if (head == -1)
		{
			std::cout << "Queue is Empty " << std::endl;
			return;
		}
		int middle=head;
		for (int i = head; i < last; i+=2)
		{
			middle= (middle+ 1) % size;
		}
		std::cout << "Middle element is " << arr[middle]<<std::endl;
	}
};

