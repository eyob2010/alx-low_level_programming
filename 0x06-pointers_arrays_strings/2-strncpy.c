#include "main.h"
#include "string.h"
/**
 *  * _strncpy - function that copies n number
 *  of strings from a source
 *   * @dest: Accepts the destination pointer
 *   * @src: Accepts the source pointer
 *   * @n: Accepts the number of characters or strings to be copied
 *    *
 *     * Return: On success retunes the copied pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
