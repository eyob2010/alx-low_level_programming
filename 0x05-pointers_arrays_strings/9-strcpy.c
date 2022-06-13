#include "main.h"
#include "string.h"
/**
 *  *  _strcpy - a function that copies the string
 *   *    *  @dest : Accept the first string
 *    *     @src : Accepts the second string
 *     *     *    *    *    *
 *      *      *     Return: retunes dest on success
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
