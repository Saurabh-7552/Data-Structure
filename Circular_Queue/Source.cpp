#include<iostream>
#include "Circular_Queue.h"
int main()
{
	Circular_Queue queue;
	int choice, data;
	bool found;
	while (true)
	{
		std::cout << "Enter the Choice " << std::endl;
		std::cout << "1- Insert" << std::endl;
		std::cout << "2- Display" << std::endl;
		std::cout << "3- Delete" << std::endl;
		std::cout << "4- Find middle element" << std::endl;
		std::cout << "5- Exit" << std::endl;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			std::cout << "Enter the data" << std::endl;
			std::cin >> data;
			queue.insert(data);
			break;
		case 2:queue.display();
			break;
		case 3:
			found = queue.remove();
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
		case 5:std::exit(0);
		default:
			break;
		}

	}
}