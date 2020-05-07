#include<iostream>
#include "doublyList.h"
int main()
{
	doublyList list;
	int choice, data;
	bool found;
	while (true)
	{
		std::cout << "Enter the Choice " << std::endl;
		std::cout << "1- Insert" << std::endl;
		std::cout << "2- Display" << std::endl;
		std::cout << "3- Delete" << std::endl;
		std::cout << "4- Reverse the list" << std::endl;
		std::cout << "5- Exit" << std::endl;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			std::cout << "Enter the data" << std::endl;
			std::cin >> data;
			list.Insert(data);
			break;
		case 2:list.display();
			break;
		case 3:
			std::cout << "Enter the data to be deleted" << std::endl;
			std::cin >> data;
			found = list.delete_Node(data);
			if (found)
			{
				std::cout << "Successfully deleted" << std::endl;
			}
			else
			{
				std::cout << "Element not found" << std::endl;
			}
			break;
		case 4: list.reverse_list();
			break;
		case 5:std::exit(0);
		default:
			break;
		}

	}
	return 0;
}