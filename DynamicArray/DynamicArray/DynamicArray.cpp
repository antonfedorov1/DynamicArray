#include <iostream>
#include "DynamicArray.h"

int* DynamicArray::GetArray()
{
	return _array;
}

int DynamicArray::GetLength()
{
	return _length;
}

int DynamicArray::GetCapacity()
{
	return _capacity;
}

void DynamicArray::AncreasingTheArray()
{
	while (_length > _capacity)
	{
		if (_length > _capacity)
		{
			_capacity *= _growthFactor;
		}
	}	
}

void DynamicArray::MakeArrayFields(int arrayFields[], int count)
{
	_length = count;
	AncreasingTheArray();
	_array = arrayFields;
}

void DynamicArray::AddElement(int index, int element)
{
	if (index > _length)
	{
		const int oldLenght = _length;
		_length = index + 1;
		AncreasingTheArray();
		for (int i = oldLenght; i < _length; ++i)
		{
			if (i == _length - 1)
			{
				_array[i] = element;
				break;
			}
			_array[i] = 0;
		}
	}
	else
	{
		_length += 1;
		AncreasingTheArray();
		for (int i = 0; i < _length; ++i)
		{
			if (index == i)
			{
				for (int j = _length - 1; j > i; --j)
				{
					_array[j] = _array[j - 1];
				}
				_array[i] = element;
				break;
			}
		}
	}
}

void DynamicArray::InsertAfterElement(int index, int element)
{
	AddElement(index + 1, element);
}

void DynamicArray::InsertInTheBegining(int element)
{
	AddElement(0, element);
}

void DynamicArray::InsertInTheEnd(int element)
{
	AddElement(_length, element);
}

void DynamicArray::DeleteElement(int index)
{
	for (int i = 0; i < _length; ++i)
	{
		if (index == i)
		{
			for (int j = i; j < _length; j++)
			{
				_array[j] = _array[j + 1];
			}
			_array[_length] = 0;
			_length -= 1;
			break;
		}
	}
}

void DynamicArray::InsertionSort()
{
	for (int i = 1; i < _length; i++)
	{
		int j = i - 1;
		while (j >= 0 && _array[j] > _array[j + 1])
		{
			std::swap(_array[j], _array[j + 1]);
			j--;
		}
	}
}

int DynamicArray::LinearSearch(int element)
{
	for (int i = 0; i < _length; i++)
	{
		if (_array[i] == element)
		{
			return i;
		}
	}
	return -1;
}

int DynamicArray::BinarySearch(int* array, int element, int leftIndex, int rightIndex)
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
	return 0;
}