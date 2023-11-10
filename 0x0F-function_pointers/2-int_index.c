#include "function_pointers.h"

/**
 * int_index - function that earches for an integer.
 * @array: array of integers.
 * @size: number of elements in an array
 * @cmp: A pointer to the function to be used to compare values.
 * 
 * Return: If no element matches || size <= 0 - -1.
 *         Otherwise - The index of the first element for which
 *                     the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
										
	}
	return (-1);
}
