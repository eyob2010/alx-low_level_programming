#include"main.h"
#include"stdlib.h"
/**
 *  * _malloc_checked -  a function that allocates memory using malloc
 *   * @b: an argument to accept size of allocation
 *    *
 *     * Return: On success 1returnes pointer
 */
void *malloc_checked(unsigned int b)
{
	int *c;

	c = (unsigned int *) malloc(b * sizeof(unsigned int));

	if (c == NULL)
	{
		return (98);
	}
	else
	return (*c);

}