#include<iostream>
#include "Queue.h"
int main()
{
	My_Queue queue;
	int choice, data;
	bool found;
	while (true)
	{
		std::cout << "Enter the Choice " << std::endl;
		std::cout << "1- Enqueue" << std::endl;
		std::cout << "2- Display" << std::endl;
		std::cout << "3- Dequeue" << std::endl;
		std::cout << "4- Find middle element" << std::endl;
		std::cout << "5- Reverse the Queue" << std::endl;
		std::cout << "6- Exit" << std::endl;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			std::cout << "Enter the data" << std::endl;
			std::cin >> data;
			queue.Enqueue(data);
			break;
		case 2:queue.display();
			break;
		case 3:
			found = queue.Dequeue();
			if (found)
			{
				std::cout << "Successfully deleted" << std::endl;
			}
			else
			{
				std::cout << "Cannot be deleted" << std::endl;
			}
			break;
		case 4: queue.find_Middle();
			break;
		case 5: queue.reverse();
			break;
		case 6:std::exit(0);
		default:
			break;
		}

	}
}