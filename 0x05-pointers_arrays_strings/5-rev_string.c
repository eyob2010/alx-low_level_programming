#include "main.h"
#include "string.h"
#include "stdio.h"
/**
 *  *  rev_string - a function that reverses a string
 *   *    *  @s : Accept the string
 *     *     *    *    *    *
 *      *      *     Return: void
 */
void rev_string(char *s)
{
	int i;

	i = strlen(s);
	i = (i - 1);

	while (s[i] >= '\0')
	{
		_putchar(s[i]);
		i--;
	}

}
