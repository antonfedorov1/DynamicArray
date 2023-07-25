#pragma once
/// <summary>
/// Dynamic Array.
/// </summary>
struct DynamicArray
{
	/// <summary>
	/// Referencing data in a dynamic array.
	/// </summary>
	int* Array;

	/// <summary>
	/// Dynamic array length.
	/// </summary>
	int Length = 0;

	/// <summary>
	/// Dynamic array capacity.
	/// </summary>
	int Capacity = 4;

	/// <summary>
	/// Dynamic array growth factor.
	/// </summary>
	const int GrowthFactor = 2;
};

/// <summary>
/// Increasing the array capacity of a dynamic array.
/// </summary>
/// <param name="dynamicArray"> - ”казатель на динамический массив</param>
void AncreasingTheArray(DynamicArray* dynamicArray);

/// <summary>
/// Adding a specific number of elements to a dynamic array.
/// </summary>
/// <param name="dynamicArray">Pointer to dynamic array.</param>
/// <param name="arrayFields">Array of values for dynamic array.</param>
/// <param name="count">Number of elements in dynamic array.</param>
void MakeArrayFields(DynamicArray* dynamicArray, int arrayFields[], int count);

/// <summary>
/// Adding an element after a specific index.
/// </summary>
/// <param name="dynamicArray">Pointer to dynamic array.</param>
/// <param name="index">Element index.</param>
/// <param name="element">Element value.</param>
void InsertAfterElement(DynamicArray* dynamicArray, int index, int element);

/// <summary>
/// Adding an element by index.
/// </summary>
/// <param name="dynamicArray">Pointer to dynamic array.</param>
/// <param name="index">Element index.</param>
/// <param name="element">Element value.</param>
void AddElement(DynamicArray* dynamicArray, int index, int element);

/// <summary>
/// Removing an element.
/// </summary>
/// <param name="dynamicArray">Pointer to dynamic array.</param>
/// <param name="index">Element index.</param>
void DeleteElement(DynamicArray* dynamicArray, int index);

/// <summary>
/// Adding an element to the beginning.
/// </summary>
/// <param name="dynamicArray">Pointer to dynamic array.</param>
/// <param name="element">Element value.</param>
void InsertInTheBegining(DynamicArray* dynamicArray, int element);

/// <summary>
/// Adding an element to the end.
/// </summary>
/// <param name="dynamicArray">Pointer to dynamic array.</param>
/// <param name="element">Element value.</param>
void InsertInTheEnd(DynamicArray* dynamicArray, int element);

/// <summary>
/// Insertion sort.
/// </summary>
/// <param name="dynamicArray">Pointer to dynamic array.</param>
void InsertionSort(DynamicArray* dynamicArray);

/// <summary>
/// Linear search.
/// </summary>
/// <param name="dynamicArray">Pointer to dynamic array.</param>
/// <param name="element">Search element.</param>
int LinearSearch(DynamicArray* dynamicArray, int element);

/// <summary>
/// Binary search.
/// </summary>
/// <param name="array">Pointer to data from dynamic array.</param>
/// <param name="element">Search element.</param>
/// <param name="leftIndex">Left index.</param>
/// <param name="rightIndex">Right index.</param>
int BinarySearch(int *array, int element, int leftIndex, int rightIndex);

/// <summary>
/// Show array.
/// </summary>
/// <param name="dynamicArray">Pointer to dynamic array.</param>
int* ShowArray(DynamicArray* dynamicArray);