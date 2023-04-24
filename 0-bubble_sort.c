#include "sort.h"

/**
 * bubble_sort - bubble sorting
 * @array: array to sort
 * @size: array size
 * Return: sort and print
 */

void bubble_sort(int *array, size_t size)
{
	int uwu;
	size_t i, j;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				uwu = array[j];
				array[j] = array[j + 1];
				array[j + 1] = uwu;
				print_array(array, size);
			}
		}
	}
}
