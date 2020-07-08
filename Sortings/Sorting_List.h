
class Sorting_List
{
	int partition(int* arr[], int low, int high)
	{

		int* pivot = arr[high]; // pivot  
		int i = (low - 1); // Index of smaller element  

		for (int j = low; j <= high - 1; j++)
		{
			// If current element is smaller than the pivot  
			if (arr[j] < pivot)
			{
				i++; // increment index of smaller element  
				swap(&arr[i], &arr[j]);
			}
		}
		swap(&arr[i + 1], &arr[high]);
		return (i + 1);
	}
	void swap(int** first, int** second)
	{
		int temp = **first;
		**first = **second;
		**second = temp;
	}
	void Merge(int* arr[], int low, int mid, int high)
	{
		int size_lower = mid - low + 1, size_larger = high - mid;
		int* L = new int[size_lower]; int* H = new int[size_larger];
		for (int i = 0; i < size_lower; i++)
			L[i] = *arr[low + i];
		for (int j = 0; j < size_larger; j++)
			H[j] = *arr[mid + 1 + j];
		int i = 0; // Initial index of first subarray 
		int j = 0; // Initial index of second subarray 
		int k = low; // Initial index of merged subarray 
		while (i < size_lower && j < size_larger) {
			if (L[i] <= H[j]) {
				*arr[k] = L[i];
				i++;
			}
			else {
				*arr[k] = H[j];
				j++;
			}
			k++;
		}

		/* Copy the remaining elements of L[], if there
		   are any */
		while (i < size_lower) {
			*arr[k] = L[i];
			i++;
			k++;
		}

		/* Copy the remaining elements of R[], if there
		   are any */
		while (j < size_larger) {
			*arr[k] = H[j];
			j++;
			k++;
		}
	}
public:
	void Bubble_Sort(int* arr[], int size)   // In each iteration largest element goes to last position
	{
		int *temp;
		for(int i=0;i<size;++i)
			for (int j = 0; j < size-1; ++j)
			{
				if (arr[j] > arr[j + 1])
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
	}
	void Insertion_Sort(int* arr[], int size) // In each iteration current element goes to its right position
	{
		int* key, index, *temp;
		
		for (int i = 1; i < size; ++i)
		{
			key = arr[i];
			int k=i-1;
			
			while (k>=0 && key<arr[k])
			{
				arr[k + 1] = arr[k];
			}
			
			arr[k + 1] = key;
		}
	}
	void Selection_Sort(int* arr[], int size)  // In each iteration minimum element goes to first place
	{
		int* min, index,*temp;
		for (int i = 0; i < size; ++i)
		{
			min = arr[i];
			index = i;
			for (int j = i + 1; j < size; ++i)
			{
				if (arr[j] < min)
				{
					min = arr[j];
					index = j;
				}
			}
			if (i != index)
			{
				temp = arr[index];
				arr[index] = arr[i];
				arr[i] = temp;
			}
		
		}
	}
	void Quick_Sort(int* arr[], int low,int high)  // In each iteration around the pivot point all smaller element(than pivot) goes to it's left    											      
	{                                              //  and all larger element(than pivot) goes to it' right 
		int index;
		if (low < high)
		{
			index = partition(arr, low, high);    //See partion fuction in private section
			Quick_Sort(arr, low, index - 1);
			Quick_Sort(arr, index + 1, high);
		}
	}
	void Merge_Sort(int* arr[], int low,int high)
	{
		int mid = (high + low) / 2;
		Merge_Sort(arr, low, mid);
		Merge_Sort(arr, mid + 1, high);
		Merge(arr, low, mid, high);               //See Merge fuction in private section
	}
};
