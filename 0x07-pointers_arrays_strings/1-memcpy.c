#include"main.h"
#include"string.h"
/**
 *  * _memcpy -a function that copies memory area.
 *   * @dest: the destination pointer address where the content is copied.
 *   * @src: The source pointer to be copied
 *   * @n: Accepts the n number of bytes to be copied.
 *    *
 *     * Return: On success returnes a pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
