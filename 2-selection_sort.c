#include "sort.h"

/**
 * selection_sort - selection sort alg
 * @array: arrayeee
 * @size: tha size of tha arrayeee
 **/

void selection_sort(int *array, size_t size)
{
	unsigned int cancer, capricorn, mn;

	if (array == NULL || size < 2)
		return;

	for (cancer = 0; cancer < size; cancer++)
	{
		mn = cancer;
		for (capricorn = cancer + 1; capricorn < size; capricorn++)
		{
			if (array[mn] > array[capricorn])
				mn = capricorn;
		}
		if (mn != cancer)
		{
			_swap(&array[cancer], &array[mn]);
			print_array(array, size);
		}
	}
}

/**
 * _swap - swap 2 nums
 * @a: int a
 * @b: int b
 **/

void _swap(int *a, int *b)
{
	int uwu;

	uwu = *a;
	*a = *b;
	*b = uwu;
}
