#include"function_pointers.h"
#include"stddef.h"
/**
 *  *  * array_iterator -  a function that executes a function
 *  given as a parameter on each element of an array..
 *   *   * @array: accepts the array
 *    *   * @size: array size
 *    *	  * @action: the pointer to the function
 *      *     * Return: On success it had nothing to returnv
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
