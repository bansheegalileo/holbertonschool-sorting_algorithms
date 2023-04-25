#include "sort.h"

/**
 * quick_sort -Sort an array using quick_sort algorithm
 * @array: array
 * @size: size
 **/

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	qu_so_arr(array, 0, size - 1, size);
}

/**
 * banana - splits the array and pivots at lt
 * @arr: Array
 * @mn: 1st
 * @lt: Lst
 * @size: size
 * Return: int
 **/

int banana(int *arr, int mn, int lt, size_t size)
{
	int pvt;
	int i = (mn);
	int j;

	pvt = arr[lt];
	for (j = mn; j < lt; j++)
	{
		if (arr[j] <= pvt)
		{

			sworp(&arr[i], &arr[j]);


			if (i != j)
				print_array(arr, size);

			i++;

		}
	}

	sworp(&arr[i], &arr[lt]);
	if (i != j)
		print_array(arr, size);

	return (i);
}

/**
 * qu_so_arr - quick sort array
 * @arr: arr
 * @mn: min
 * @lt: last
 * @size: size
 * Return: Nothing
 */
void qu_so_arr(int *arr, int mn, int lt, size_t size)
{

	int pvt;

	if (mn < lt)
	{
		pvt = banana(arr, mn, lt, size);
		qu_so_arr(arr, mn, (pvt - 1), size);
		qu_so_arr(arr, (pvt + 1), lt, size);
	}
}

/**
 * sworp - swap 2 nums
 * @a: int a
 * @b: int b
 **/

void sworp(int *a, int *b)
{
	int uwu;

	uwu = *a;
	*a = *b;
	*b = uwu;
}
