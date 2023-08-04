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
	if (_length > _capacity)
	{
		const int oldLenght = GetLength() - 1;
		const int* oldArray = _array;

		while (_length > _capacity)
		{
			_capacity *= _growthFactor;
		}

		int* newArray = new int[GetCapacity()];
		for (int i = 0; i < oldLenght; i++)
		{
			newArray[i] = oldArray[i];
		}
		delete[] _array;
		_array = newArray;
	}
}

bool DynamicArray::IsArrayCreated()
{
	if (_array == nullptr)
	{
		_array = new int[GetCapacity()];
		return true;
	}
	return false;
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
	for (int i = index; i < _length; i++)
	{
		_array[i] = _array[i + 1];
	}
	_array[_length] = NULL;
	_length -= 1;
	if (GetLength() == 0) { _array = nullptr; }
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