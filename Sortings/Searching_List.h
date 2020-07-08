#pragma once
class Searching_List
{
	int LinearSearch(int arr[], int size,int data)
	{
		int found = -1;
		for (int i = 0; i < size; ++i)
		{
			if (data = arr[i])
			{
				found = i;
				break;
			}
		}
		return found;
	}
	int binarySearch(int arr[],int size,int data)
	{
		int found = -1;
		int low = 0,high = size;
		int mid;
		while (low > high)
		{
			mid = (low + high) / 2;
			if (arr[mid] == data)
			{
				found = mid;
				break;
			}
			if (arr[mid] > data)
				high = mid - 1;
			else
				low = mid + 1;
		}
		return found;
	}
};

