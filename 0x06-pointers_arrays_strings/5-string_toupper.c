#include "main.h"
#include "ctype.h"
#include "string.h"
/**
 *  * string_toupper - a function that changes all
 *  lowercase letters of a string to uppercase.
 *   *   * @a: Accepts the pointer to be changed to uppercase
 *    *
 *     * Return: On success returnes uppercase character
 */
char *string_toupper(char *a)
{
	int i, count;

	count = strlen(a);
	for (i = 0; i < (count - 1); i++)
	{
		a[i] = toupper(a[i]);
	}
	return (a);
}
