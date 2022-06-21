#include "main.h"
#include "string.h"
/**
 *  * _memset -  a function that fills memory with a constant byte
 *   * @s: Accepts the pointer address
 *   * @b: Accepts the constant byte
 *   * @n: Accepts the first n bytes
 *    *
 *     * Return: On success returnes a character
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
