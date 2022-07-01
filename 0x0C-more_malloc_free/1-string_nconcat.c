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
	int size;

	size = (strlen(s1) + strlen(s2));

	s3 = (char *)malloc(size(sizeof(char));
			if (n >= strlen(s2))
			{
			strncat(s3, s1);
			strncat(s3, s2);
			return (s3);
			}
			else if (s3 == NULL)
			{
			return (NULL);
			}
			else
			{
			strncat(s3, s1);
			strncat(s3, s2, n);
			return (s3);
			}
}
