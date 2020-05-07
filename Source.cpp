#include<iostream>
#include "My_LinkedList.h"
int main()
{
	My_LinkedList list;
	int choice,data;
	bool found;
	while (true)
	{
		std::cout << "Enter the Choice " << std::endl;
		std::cout << "1- Insert" << std::endl;
		std::cout << "2- Display" << std::endl;
		std::cout << "3- Delete" << std::endl;		
		std::cout << "4- Find middle element" << std::endl;		
		std::cout << "5- Reverse the list" << std::endl;
		std::cout << "6- Exit" << std::endl;
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
		case 4: list.find_Middle();
		     	break;
		case 5: list.reverse_list();
			    break;
		case 6:std::exit(0);
		default:
			break;
		}
		
	}
}