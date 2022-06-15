#include "main.h"
#include "string.h"
/**
 *  *  * _strcat - a function that concatenates two strings.
 *   *   *   * @dest: Accepts the first pointer
 *   *	*    * @src: Accepts the second pointer
 *    *    *
 *     *     * Return: a pointer success.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
