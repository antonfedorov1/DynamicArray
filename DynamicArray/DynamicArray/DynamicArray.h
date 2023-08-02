#pragma once

/// <summary>
/// Dynamic _array.
/// </summary>
class DynamicArray
{
private:
	/// <summary>
	/// Referencing data in a dynamic array.
	/// </summary>
	int* _array = nullptr;

	/// <summary>
	/// Dynamic array length.
	/// </summary>
	int _length = 0;

	/// <summary>
	/// Dynamic array capacity.
	/// </summary>
	int _capacity = 4;

	/// <summary>
	/// Dynamic array growth factor.
	/// </summary>
	const int _growthFactor = 2;

public:
	/// <summary>
	/// Returns an array.
	/// </summary>
	///	<returns>An array of values.</returns>
	int* GetArray();

	/// <summary>
	/// Returns the length of an array.
	/// </summary>
	/// <returns>The length of the array.</returns>
	int GetLength();

	/// <summary>
	/// Returns the depth of an array.
	/// </summary>
	///	<returns>The depth of the array.</returns>
	int GetCapacity();

	/// <summary>
	/// Increasing the array capacity of a dynamic array.
	/// </summary>
	void AncreasingTheArray();

	/// <summary>
	/// Adding a specific number of elements to a dynamic array.
	/// </summary>
	/// <param name="arrayFields">_array of values for dynamic array.</param>
	/// <param name="count">Number of elements in dynamic array.</param>
	void MakeArrayFields(int arrayFields[], int count);

	/// <summary>
	/// Adding an element after a specific index.
	/// </summary>
	/// <param name="index">Element index.</param>
	/// <param name="element">Element value.</param>
	void InsertAfterElement(int index, int element);

	/// <summary>
	/// Adding an element by index.
	/// </summary>
	/// <param name="index">Element index.</param>
	/// <param name="element">Element value.</param>
	void AddElement(int index, int element);

	/// <summary>
	/// Removing an element.
	/// </summary>
	/// <param name="index">Element index.</param>
	void DeleteElement(int index);

	/// <summary>
	/// Adding an element to the beginning.
	/// </summary>
	/// <param name="element">Element value.</param>
	void InsertInTheBegining(int element);

	/// <summary>
	/// Adding an element to the end.
	/// </summary>
	/// <param name="element">Element value.</param>
	void InsertInTheEnd(int element);

	/// <summary>
	/// Insertion sort.
	/// </summary>
	void InsertionSort();

	/// <summary>
	/// Linear search.
	/// </summary>
	/// <param name="element">Search element.</param>
	///	<returns>The index of the element to be searched.</returns>
	int LinearSearch(int element);

	/// <summary>
	/// Binary search.
	/// </summary>
	/// <param name="array">Pointer to data from dynamic array.</param>
	/// <param name="element">Search element.</param>
	/// <param name="leftIndex">Left index.</param>
	/// <param name="rightIndex">Right index.</param>
	///	<returns>The index of the element to be searched.</returns>
	int BinarySearch(int* array, int element, int leftIndex, int rightIndex);
};