#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in
 *  ascending order using the Bubble sort algorithm
 *  @array: POinter to array to be sorted
 *  @size: Size of the array to be sorted
 *
 *  Return: None
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j; /* Variable that will be used to iterate through the loop */
	int n; /*Temporary value holder in the loop*/
	int swapped; /*Variable to keep track of if there was a swap*/

	if (array && size > 0)
	{
		for (i = 0; size > i + 1; i++)
		{
			swapped = 0;
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					n = array[j + 1];
					array[j + 1] = array[j];
					array[j] = n;

					swapped = 1;

					print_array(array, size);
				}
			}

			if (swapped == 0)
				break;
		}
	}
}
