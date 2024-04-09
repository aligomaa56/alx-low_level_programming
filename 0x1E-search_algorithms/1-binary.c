#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 * Return: index of num or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, L = 0, H = size - 1;

	if (array == NULL)
		return (-1);

	for (L, H; H >= L;)
	{
		printf("Searching in array: ");
		for (i = L; i < H; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = L + (H - L) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			H = i - 1;
		else
			L = i + 1;
	}

	return (-1);
}
