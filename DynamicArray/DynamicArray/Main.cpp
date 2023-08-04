#include <iostream>
#include "DynamicArray.h"

using namespace std;

/// <summary>
/// Entering an element or index.
/// </summary>
/// <param name="flag">We enter the element - true. Enter the index - false.</param>
///	<returns>Number.</returns>
int EnterTheElementOrIndex(bool flag);

/// <summary>
/// Checking if a number is positive or not.
/// </summary>
///	<param name="number">Number.</param>
///	<returns>Positive number.</returns>
int IsPossitiveNumber(int number);

/// <summary>
/// Check entered number or character.
/// </summary>
///	<returns>Number.</returns>
int IsNumberOrLetter();

/// <summary>
/// Checking for an empty array.
/// </summary>
///	<param name="dynamicArray">Dynamic array.</param>
///	<returns>True or false.</returns>
bool IsEmptyArray(DynamicArray* dynamicArray);

int main()
{
	DynamicArray *dynamicArray = new DynamicArray();

	while (true)
	{
		cout << "Length: "<< dynamicArray->GetLength() << " "
			<< "Capacity: " << dynamicArray->GetCapacity() << endl;
		cout << "Array: ";
		const int* showArrayBuffer = new int [dynamicArray->GetLength()];
		showArrayBuffer = dynamicArray->GetArray();
		for (int i = 0; i < dynamicArray->GetLength(); i++)
		{
			cout << "["<< i <<"]: " << showArrayBuffer[i] << " ";
		}
		cout << "\n\n1.Make the array fields." << endl;
		cout << "2.Add element by index." << endl;
		cout << "3.Delete an element." << endl;
		cout << "4.Insert an element after element." << endl;
		cout << "5.Insert an element in the beginning." << endl;
		cout << "6.Insert an element in the end." << endl;
		cout << "7.Sorting array." << endl;
		cout << "8.Linear search for an element in an array" << endl;
		cout << "9.Binary search for an element in an array (Sorting is called before the search)" << endl;
		cout << "10.Out of the program." << endl;

		switch (IsNumberOrLetter())
		{
		case 1:
		{
			system("cls");
			if (dynamicArray->IsArrayCreated())
			{
				cout << "Array created" << endl << endl;
			}
			else
			{
				cout << "The array has already been created!" << endl << endl;
			}
			break;
		}
		case 2:
		{
			if (!IsEmptyArray(dynamicArray)) { break; }
			const int index = EnterTheElementOrIndex(false);
			const int element = EnterTheElementOrIndex(true);
			dynamicArray->AddElement(index, element);
			system("cls");
			break;
		}
		case 3:
		{
			if (!IsEmptyArray(dynamicArray)) { break; }
			const int index = EnterTheElementOrIndex(false);
			dynamicArray->DeleteElement(index);
			system("cls");
			break;
		}
		case 4:
		{
			if (!IsEmptyArray(dynamicArray)) { break; }
			const int index = EnterTheElementOrIndex(false);
			const int element = EnterTheElementOrIndex(true);
			dynamicArray->InsertAfterElement(index, element);
			system("cls");
			break;
		}
		case 5:
		{
			if (!IsEmptyArray(dynamicArray)) { break; }
			const int element = EnterTheElementOrIndex(true);
			dynamicArray->InsertInTheBegining(element);
			system("cls");
			break;
		}
		case 6:
		{
			if (!IsEmptyArray(dynamicArray)) { break; }
			const int element = EnterTheElementOrIndex(true);
			dynamicArray->InsertInTheEnd(element);
			system("cls");
			break;
		}
		case 7:
		{
			if (!IsEmptyArray(dynamicArray)) { break; }
			dynamicArray->InsertionSort();
			system("cls");
			break;
		}
		case 8:
		{
			if (!IsEmptyArray(dynamicArray)) { break; }
			const int element = EnterTheElementOrIndex(true);
			const int linearSearchNumber = dynamicArray->LinearSearch(element);
			system("cls");
			if (linearSearchNumber >= 0)
			{
				cout << "Number " << element << " is at index " << linearSearchNumber << endl;
			}
			else
			{
				cout << "There is no such value in the array." << endl;
			}
			break;
		}
		case 9:
		{
			if (!IsEmptyArray(dynamicArray)) { break; }
			const int element = EnterTheElementOrIndex(true);
			dynamicArray->InsertionSort();
			const int indexOfElement = dynamicArray->BinarySearch(dynamicArray->GetArray(), element, 0, dynamicArray->GetLength() - 1);
			system("cls");
			cout << "The index of the element " << element << " : " << indexOfElement << endl;
			break;
		}
		case 10:
		{
			showArrayBuffer = nullptr;
			dynamicArray = nullptr;
			delete[] showArrayBuffer;
			delete dynamicArray;
			return 0;
		}
		default:
		{
			system("cls");
			cout << "Unknown command" << endl;
		}
		}
	}
}

int EnterTheElementOrIndex(bool flag)
{
	int number;
	if (flag == true)
	{
		cout << "Enter the element: ";
		number = IsNumberOrLetter();
		return number;
	}
	else
	{
		cout << "Enter the index of element: ";
		number = IsNumberOrLetter();
		number = IsPossitiveNumber(number);
		return number;
	}
}

int IsPossitiveNumber(int number)
{
	if (number >= 0)
	{
		return number;
	}
	else
	{
		cout << "The number must be positive!" << endl;
		number = IsNumberOrLetter();
		IsPossitiveNumber(number);
	}
	return 0;
}

int IsNumberOrLetter()
{
	int valueToValidation;
	while (!(cin >> valueToValidation))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Invalid input. Repeat." << endl;
		cout << "Insert the number ";
	}
	return valueToValidation;
}

bool IsEmptyArray(DynamicArray *dynamicArray)
{
	if (dynamicArray->GetArray() == nullptr)
	{
		system("cls");
		cout << "The array has not been created. To create an array, use the first menu item."
			<< endl << endl;
		return false;
	}
	return true;
}