#include"main.h"
#include"stdlib.h"
/**
 *  * _calloc - a function that allocates memory for an array, using malloc
 *   * @nmemb: Accepts the number of array argument
 *   * @size: Accepts the intiger size of memorey
 *    *
 *     * Return: On success it return the allocated memorey
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(nmemb * sizeof(size));
		return (ptr);
	}
	return (NULL);
}
