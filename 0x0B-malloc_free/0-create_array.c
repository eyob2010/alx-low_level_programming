#include"main.h"
#include"stdlib.h"
#include <unistd.h>
/**
 *  * create_array -  a function that creates an array of
 *  chars, and initializes it with a specific char.
 *   * @size: The number of bytes
 *   * @c: the pointer grts the allocation
 *    *
 *     * Return: On success it returnes a char
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	if (size == 0 || !isdigit(size))
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);

	if (a != NULL)
	{
		*a = c;
		return (a);
	}
	else
	{
		return (NULL);
	}
}
