#pragma once
/// <summary>
/// Динамический массив
/// </summary>
struct DynamicArray
{
	/// <summary>
	/// Ссылка на данные в динамическом массиве
	/// </summary>
	int* Array;

	/// <summary>
	/// Длина динамического массива
	/// </summary>
	int Length = 0;

	/// <summary>
	/// Вместимость динамического массива
	/// </summary>
	int Capacity = 4;

	/// <summary>
	/// Фактор роста динамического массива
	/// </summary>
	const int GrowthFactor = 2;
};

/// <summary>
/// Увеличение массива вместительности динамического массива
/// </summary>
/// <param name="dynamicArray"> - Указатель на динамический массив</param>
void AncreasingTheArray(DynamicArray* dynamicArray);

/// <summary>
/// Добавление определенного числа элементов в динамический массив
/// </summary>
/// <param name="dynamicArray"> - Указатель на динамический массив</param>
/// <param name="arrayFields"> - Массив значений для динамического массива</param>
/// <param name="count"> - Количество элементов в динамическом массиве</param>
void MakeArrayFields(DynamicArray* dynamicArray, int arrayFields[], int count);

/// <summary>
/// Добавление элемента после определенного индекса
/// </summary>
/// <param name="dynamicArray"> - Указатель на динамический массив</param>
/// <param name="index"> - Индекс элемента</param>
/// <param name="element"> - Значение элемента</param>
void InsertAfterElement(DynamicArray* dynamicArray, int index, int element);

/// <summary>
/// Добавление элемента по индексу
/// </summary>
/// <param name="dynamicArray"> - Указатель на динамический массив</param>
/// <param name="index"> - Индекс элемента</param>
/// <param name="element"> - Значение элемента</param>
void AddElement(DynamicArray* dynamicArray, int index, int element);

/// <summary>
/// Удаление элемента
/// </summary>
/// <param name="dynamicArray"> - Указатель на динамический массив</param>
/// <param name="index"> - Индекс элемента</param>
void DeleteElement(DynamicArray* dynamicArray, int index);

/// <summary>
/// Добавление элемента в начало
/// </summary>
/// <param name="dynamicArray"> - Указатель на динамический массив</param>
/// <param name="element"> - Значение элемента</param>
void InsertInTheBegining(DynamicArray* dynamicArray, int element);

/// <summary>
/// Добавление элемента в конец
/// </summary>
/// <param name="dynamicArray"> - Указатель на динамический массив</param>
/// <param name="element"> - Значение элемента</param>
void InsertInTheEnd(DynamicArray* dynamicArray, int element);

/// <summary>
/// Сортировка вставками
/// </summary>
/// <param name="dynamicArray"> - Указатель на динамический массив</param>
void InsertionSort(DynamicArray* dynamicArray);

/// <summary>
/// Линейный поиск
/// </summary>
/// <param name="dynamicArray"> - Указатель на динамический массив</param>
/// <param name="element"> - Искомый элемент</param>
int LinearSearch(DynamicArray* dynamicArray, int element);

/// <summary>
/// Бинарный поиск
/// </summary>
/// <param name="array"> - Указатель на данные из динамического массива</param>
/// <param name="element"> - Искомый элемент</param>
/// <param name="leftIndex"> - Левый индекс</param>
/// <param name="rightIndex"> - Правый индекс</param>
int BinarySearch(int *array, int element, int leftIndex, int rightIndex);

/// <summary>
/// Показать массив
/// </summary>
/// <param name="dynamicArray"> - Указатель на динамический массив</param>
int* ShowArray(DynamicArray* dynamicArray);