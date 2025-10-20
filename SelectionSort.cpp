#include "SelectionSort.h"

void SelectionSort::Exec(int* array, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int min_idex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idex]) { min_idex = j; }
		}
		Swap(array[min_idex], array[i]);
	}
}
