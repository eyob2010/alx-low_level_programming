#include "main.h"
#include "string.h"
/**
 *  * _strncat - a function that concatenates
 *  two strings based on n number of bytes
 *   * @dest: Accetps the destination pointer
 *   * @src: Accepts the source pointer
 *   * @n: is the number of types that copyed from source to destination
 *    *
 *     * Return: On succes it returnes the src pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
