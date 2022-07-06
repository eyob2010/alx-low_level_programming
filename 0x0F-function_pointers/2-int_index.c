#include"function_pointers.h"
/**
 *  * int_index - a function that searches for an integer
 *   * @array: a parameter to accept for an array
 *   * @size: size of an array
 *   * @cmp: a pointer to the function to be used to compare
 *    *
 *     * Return: on success returns index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		int i, result;

		for (i = 0; i < size; i++)
		{
			result = (*cmp)(array[i]);
			if (result != 0)
			{
				return (i);
			}
		}
		if (result == 0)
		{
		}
	}
	return (0);
}
