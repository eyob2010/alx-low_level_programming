#include"main.h"
#include"string.h"
/**
 *  * _strlen_recursion - a function that returns the length of a string.
 *   * @s: accepts the string
 *    *
 *     * Return: On success it returnes the string length.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursions(s + 1));
	}
	else
	{
		return (0);
	}

}
