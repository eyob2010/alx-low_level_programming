#include"main.h"
#include"string.h"
/**
 *  * _putchar - writes the character c to stdout
 *   * @s1: Accepts the first parameter
 *   * @s2: Accepts the second parameter
 *    *
 *     * Return: On success return concantenate pointer
 */
char *str_concat(char *s1, char *s2)
{
	if ((s1 == NULL) || (s2 == NULL))
	{
		return (NULL);
	}
	else
	{
	while (*s1)
	{
		s1++;
	}
	while (*s2)
	{
		*s1 = *s2;
		s2++;
		s1++;
	}
	return (s1);
	}
}
