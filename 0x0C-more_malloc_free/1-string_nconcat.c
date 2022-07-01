#include"main.h"
#include"stdlib.h"
#include"string.h"
/**
 *  * string_concat - a function that concatenates two strings
 *   * @s1: accepts the first argument pointer
 *   * @s2: accepts the second argument pointer
 *    *
 *     * Return: On success it return
 *     the concantenate string pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int size;

	size = (strlen(s1) + strlen(s2));

	s3 = malloc(sizeof(char) * size);
		if ((s1 == NULL) && (s2 == NULL))
		{
			s1 = ('\0');
			s2 = ('\0');
		}
			else if (s1 == NULL)
			{
				s1 = ('\0');
			}
		else if (s2 == NULL)
		{
			s2 = ('\0');
		}
	else if (n >= size)
	{
		strcat(s3, s1);
		strncat(s3, s2, strlen(s2));
		return (s3);
	}
	else if (s3 == NULL)
	{
		return (NULL);
	}
	else
	{
		strcat(s3, s1);
		strncat(s3, s2, n);
		return (s3);
	}
}
