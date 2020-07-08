#include<iostream>
#include "LinkedList.h"
int main()
{

	int test_cases, E, V=0, index, connect_node;
	std::cin >> test_cases;
	while (test_cases > 0)
	{
		std::cin >> V >> E;
		LinkedList* myList = new LinkedList[V];
		for (int i = 0; i < E; ++i)
		{
			std::cin >> index >> connect_node;
			myList[index].insert(connect_node);
		}
		for (int j = 0; j < V; ++j)
		{
			myList[j].display(j);
		}
		--test_cases;
	}
	return 0;
}