#include"main.h"
#include"string.h"
#include"stdlib.h"
/**
 *  * _putchar - writes the character c to stdout
 *   * @s1: Accepts the first parameter
 *   * @s2: Accepts the second parameter
 *    *
 *     * Return: On success return concantenate pointer
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		return (s2);
	}
	else if (s2 == NULL)
	{
		return (s1);
	}
	else if ((s1 == NULL) && (s2 == NULL))
	{
		return (NULL);
	}
	else
	{
		char *s3;
		int len;

		len = (strlen(s1) + strlen(s2));
		s3 = malloc(sizeof(char) * len);
		strcat(s3, s1);
		strcat(s3, s2);
		return (s3);
	}
}
