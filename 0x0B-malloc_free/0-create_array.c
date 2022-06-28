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
	if (size == 0)
	{
		return (NULL);
	}

	c = malloc(sizeof(char) * size);

	if (c != NULL)
	{
		return (c);
	}
	else
	{
		return (NULL);
	}
}
