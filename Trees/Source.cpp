#include<iostream>
#include "My_Tree.h"
int main()
{
	My_Tree tree;
	int choice, data;
	bool found;
	std::cout << "Enter the Choice " << std::endl;
	std::cout << "1- Insert" << std::endl;
	std::cout << "2- Pre order Display" << std::endl;
	std::cout << "3- In order Display" << std::endl;
	std::cout << "4- Post order Display" << std::endl;
	std::cout << "5-Count Nodes" << std::endl;
	std::cout << "6-Count Left Nodes" << std::endl;
	std::cout << "10- Exit" << std::endl;
	while (true)
	{
		std::cout << "Enter the choice \t";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			std::cout << "Enter the data" << std::endl;
			std::cin >> data;
			tree.insert(data);
			break;
		case 2:tree.pre_order(tree.get_root());
			std::cout << std::endl;
			break;
		case 3:tree.in_order(tree.get_root());
			std::cout << std::endl;
			break;
		case 4:tree.post_order(tree.get_root());
			std::cout << std::endl;
			break;
		case 5:std::cout << tree.count_nodes(tree.get_root())<<std::endl;
			break;
		case 6:std::cout << tree.count_left(tree.get_root()) << std::endl;
			break;
		case 10:std::exit(0);
		default:
			break;
		}

	}

}