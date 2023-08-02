#include <iostream>
#include "DynamicArray.h"

using namespace std;

/// <summary>
/// Entering an element or index.
/// </summary>
/// <param name="flag">We enter the element - true. Enter the index - false.</param>
int EnterTheElementOrIndex(bool flag);

/// <summary>
/// Checking if a number is positive or not.
/// </summary>
int IsPossitiveNumber(int number);

/// <summary>
/// Check entered number or character.
/// </summary>
int IsNumberOrLetter();

int main()
{
	DynamicArray* dynamicArray = new DynamicArray();

	while (true)
	{
		cout << "Length: "<< dynamicArray->GetLength() << " " << "Capacity: " << dynamicArray->GetCapacity() << endl;
		cout << "_array: ";
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
		cout << "9.Binary search for an element in an array" << endl;
		cout << "10.Out of the program." << endl;

		int numberAction = 0;
		cin >> numberAction;

		switch (numberAction)
		{
		case 1:
		{
			cout << "How many elements do you want to make?" << endl;
			int count;
			count = IsNumberOrLetter();
			int* arrayFields = new int[count];
			for (int i = 0; i < count; i++)
			{
				cout << "\nEnter the element array[" << i << "]: ";
				arrayFields[i] = IsNumberOrLetter();
			}
			dynamicArray->MakeArrayFields(arrayFields, count);
			system("cls");
			break;
		}
		case 2:
		{
			if (dynamicArray->GetLength() == 0)
			{
				system("cls");
				cout << "The array has not been created. To create an array, use the first menu item."
					<< endl << endl;
				break;
			}
			int index = EnterTheElementOrIndex(false);
			int element = EnterTheElementOrIndex(true);
			dynamicArray->AddElement(index, element);
			system("cls");
			break;
		}
		case 3:
		{
			if (dynamicArray->GetLength() == 0)
			{
				system("cls");
				cout << "The array has not been created. To create an array, use the first menu item."
					<< endl << endl;
				break;
			}
			int index = EnterTheElementOrIndex(false);
			dynamicArray->DeleteElement(index);
			system("cls");
			break;
		}
		case 4:
		{
			if (dynamicArray->GetLength() == 0)
			{
				system("cls");
				cout << "The array has not been created. To create an array, use the first menu item."
					<< endl << endl;
				break;
			}
			int index = EnterTheElementOrIndex(false);
			int element = EnterTheElementOrIndex(true);
			dynamicArray->InsertAfterElement(index, element);
			system("cls");
			break;
		}
		case 5:
		{
			if (dynamicArray->GetLength() == 0)
			{
				system("cls");
				cout << "The array has not been created. To create an array, use the first menu item."
					<< endl << endl;
				break;
			}
			int element = EnterTheElementOrIndex(true);
			dynamicArray->InsertInTheBegining(element);
			system("cls");
			break;
		}
		case 6:
		{
			if (dynamicArray->GetLength() == 0)
			{
				system("cls");
				cout << "The array has not been created. To create an array, use the first menu item."
					<< endl << endl;
				break;
			}
			int element = EnterTheElementOrIndex(true);
			dynamicArray->InsertInTheEnd(element);
			system("cls");
			break;
		}
		case 7:
		{
			if (dynamicArray->GetLength() == 0)
			{
				system("cls");
				cout << "The array has not been created. To create an array, use the first menu item."
					<< endl << endl;
				break;
			}
			dynamicArray->InsertionSort();
			system("cls");
			break;
		}
		case 8:
		{
			if (dynamicArray->GetLength() == 0)
			{
				system("cls");
				cout << "The array has not been created. To create an array, use the first menu item."
					<< endl << endl;
				break;
			}
			int element = EnterTheElementOrIndex(true);
			int linearSearchNumber = dynamicArray->LinearSearch(element);
			system("cls");
			if (linearSearchNumber >= 0)
			{
				cout << "The index of the element " << element << " : " << linearSearchNumber << endl;
			}
			else
			{
				cout << "There is no such value in the array." << endl;
			}
			break;
		}
		case 9:
		{
			if (dynamicArray->GetLength() == 0)
			{
				system("cls");
				cout << "The array has not been created. To create an array, use the first menu item."
					<< endl << endl;
				break;
			}
			int element = EnterTheElementOrIndex(true);
			dynamicArray->InsertionSort();
			int indexOfElement = dynamicArray->BinarySearch(dynamicArray->GetArray(), element, 0, dynamicArray->GetLength() - 1);
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