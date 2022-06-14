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
	int i, len;
	char temp;

	len = strlen(s);

	for (i = 0; i < (len / 2); i++)
	{
		temp = s[i];
		s[i] = s[(len - i) - 1];
		s[(len - i) - 1] = temp;
	}
}
