#include "search_algos.h"

/**
 * linear_search - Linear search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 * Return: index of num or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
