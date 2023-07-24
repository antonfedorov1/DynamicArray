#include <iostream>
#include "DynamicArray.h"

void AncreasingTheArray(DynamicArray* dynamicArray)
{
	while (dynamicArray->Length > dynamicArray->Capacity)
	{
		if (dynamicArray->Length > dynamicArray->Capacity)
		{
			dynamicArray->Capacity *= dynamicArray->GrowthFactor;
		}
	}	
}

void MakeArrayFields(DynamicArray* dynamicArray, int arrayFields[], int count)
{
	dynamicArray->Length = count;
	AncreasingTheArray(dynamicArray);
	dynamicArray->Array = arrayFields;
}

void AddElement(DynamicArray* dynamicArray, int index, int element)
{
	if (index > dynamicArray->Length)
	{
		int oldLenght = dynamicArray->Length;
		dynamicArray->Length = index + 1;
		AncreasingTheArray(dynamicArray);
		for (int i = oldLenght; i < dynamicArray->Length; ++i)
		{
			if (i == dynamicArray->Length - 1)
			{
				dynamicArray->Array[i] = element;
				break;
			}
			dynamicArray->Array[i] = 0;
		}
	}
	else
	{
		dynamicArray->Length += 1;
		AncreasingTheArray(dynamicArray);
		for (int i = 0; i < dynamicArray->Length; ++i)
		{
			if (index == i)
			{
				for (int j = dynamicArray->Length - 1; j > i; --j)
				{
					dynamicArray->Array[j] = dynamicArray->Array[j - 1];
				}
				dynamicArray->Array[i] = element;
				break;
			}
		}
	}
}

void InsertAfterElement(DynamicArray* dynamicArray, int index, int element)
{
	AddElement(dynamicArray, index + 1, element);
}

void InsertInTheBegining(DynamicArray* dynamicArray, int element)
{
	AddElement(dynamicArray, 0, element);
}

void InsertInTheEnd(DynamicArray* dynamicArray, int element)
{
	AddElement(dynamicArray, dynamicArray->Length, element);
}

void DeleteElement(DynamicArray* dynamicArray, int index)
{
	for (int i = 0; i < dynamicArray->Length; ++i)
	{
		if (index == i)
		{
			for (int j = i; j < dynamicArray->Length; j++)
			{
				dynamicArray->Array[j] = dynamicArray->Array[j + 1];
			}
			dynamicArray->Array[dynamicArray->Length] = 0;
			dynamicArray->Length -= 1;
			break;
		}
	}
}

void InsertionSort(DynamicArray* dynamicArray)
{
	for (int i = 1; i < dynamicArray->Length; i++)
	{
		int j = i - 1;
		while (j >= 0 && dynamicArray->Array[j] > dynamicArray->Array[j + 1])
		{
			std::swap(dynamicArray->Array[j], dynamicArray->Array[j + 1]);
			j--;
		}
	}
}

int LinearSearch(DynamicArray * dynamicArray, int element)
{
	for (int i = 0; i < dynamicArray->Length; i++)
	{
		if (dynamicArray->Array[i] == element)
		{
			return i;
		}
	}
	return -1;
}

int BinarySearch(int *array, int element, int leftIndex, int rightIndex)
{
	if (leftIndex > rightIndex)
	{
		return -1;
	}
	int centre = (leftIndex + rightIndex) / 2;
	if (element > array[centre])
	{
		BinarySearch(array, element, centre + 1, rightIndex);
	}
	else if (element < array[centre])
	{
		BinarySearch(array, element, leftIndex, centre - 1);
	}
	else
	{
		return centre;
	}
}

int* ShowArray(DynamicArray * dynamicArray)
{
	return dynamicArray->Array;
}