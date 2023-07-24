#pragma once
/// <summary>
/// ������������ ������
/// </summary>
struct DynamicArray
{
	/// <summary>
	/// ������ �� ������ � ������������ �������
	/// </summary>
	int* Array;

	/// <summary>
	/// ����� ������������� �������
	/// </summary>
	int Length = 0;

	/// <summary>
	/// ����������� ������������� �������
	/// </summary>
	int Capacity = 4;

	/// <summary>
	/// ������ ����� ������������� �������
	/// </summary>
	const int GrowthFactor = 2;
};

/// <summary>
/// ���������� ������� ��������������� ������������� �������
/// </summary>
/// <param name="dynamicArray"> - ��������� �� ������������ ������</param>
void AncreasingTheArray(DynamicArray* dynamicArray);

/// <summary>
/// ���������� ������������� ����� ��������� � ������������ ������
/// </summary>
/// <param name="dynamicArray"> - ��������� �� ������������ ������</param>
/// <param name="arrayFields"> - ������ �������� ��� ������������� �������</param>
/// <param name="count"> - ���������� ��������� � ������������ �������</param>
void MakeArrayFields(DynamicArray* dynamicArray, int arrayFields[], int count);

/// <summary>
/// ���������� �������� ����� ������������� �������
/// </summary>
/// <param name="dynamicArray"> - ��������� �� ������������ ������</param>
/// <param name="index"> - ������ ��������</param>
/// <param name="element"> - �������� ��������</param>
void InsertAfterElement(DynamicArray* dynamicArray, int index, int element);

/// <summary>
/// ���������� �������� �� �������
/// </summary>
/// <param name="dynamicArray"> - ��������� �� ������������ ������</param>
/// <param name="index"> - ������ ��������</param>
/// <param name="element"> - �������� ��������</param>
void AddElement(DynamicArray* dynamicArray, int index, int element);

/// <summary>
/// �������� ��������
/// </summary>
/// <param name="dynamicArray"> - ��������� �� ������������ ������</param>
/// <param name="index"> - ������ ��������</param>
void DeleteElement(DynamicArray* dynamicArray, int index);

/// <summary>
/// ���������� �������� � ������
/// </summary>
/// <param name="dynamicArray"> - ��������� �� ������������ ������</param>
/// <param name="element"> - �������� ��������</param>
void InsertInTheBegining(DynamicArray* dynamicArray, int element);

/// <summary>
/// ���������� �������� � �����
/// </summary>
/// <param name="dynamicArray"> - ��������� �� ������������ ������</param>
/// <param name="element"> - �������� ��������</param>
void InsertInTheEnd(DynamicArray* dynamicArray, int element);

/// <summary>
/// ���������� ���������
/// </summary>
/// <param name="dynamicArray"> - ��������� �� ������������ ������</param>
void InsertionSort(DynamicArray* dynamicArray);

/// <summary>
/// �������� �����
/// </summary>
/// <param name="dynamicArray"> - ��������� �� ������������ ������</param>
/// <param name="element"> - ������� �������</param>
int LinearSearch(DynamicArray* dynamicArray, int element);

/// <summary>
/// �������� �����
/// </summary>
/// <param name="array"> - ��������� �� ������ �� ������������� �������</param>
/// <param name="element"> - ������� �������</param>
/// <param name="leftIndex"> - ����� ������</param>
/// <param name="rightIndex"> - ������ ������</param>
int BinarySearch(int *array, int element, int leftIndex, int rightIndex);

/// <summary>
/// �������� ������
/// </summary>
/// <param name="dynamicArray"> - ��������� �� ������������ ������</param>
int* ShowArray(DynamicArray* dynamicArray);