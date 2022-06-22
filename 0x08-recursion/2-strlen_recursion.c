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
	int n = 0;

	if (*s == '\0')
	{
		return (n);
	}
	else
	{
		n++;
		_strlen_recursion(++s);
	}

}
