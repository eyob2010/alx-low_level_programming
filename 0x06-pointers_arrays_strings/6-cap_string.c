#include "main.h"
#include "ctype.h"
#include "string.h"
/**
 *  * cap_string - a function that capitalizes all words of a string.
 *   * @a: A pointer that accepts the string
 *    *
 *     * Return: Returns capitaliing each word of a string
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0)
		{
			a[i] = toupper(a[i]);
		}
		if ((a[i] == ' ') || (a[i] == ',') || (a[i] == ';') || (a[i] == '.') ||
			(a[i] == '!') || (a[i] == '?') || (a[i] == '"') || (a[i] == '(')
				|| (a[i] == ')') || (a[i] == '{') || (a[i] == '}'))
		{
			i++;
			a[i] = toupper(a[i]);
		}
	}
	return (a);
}
