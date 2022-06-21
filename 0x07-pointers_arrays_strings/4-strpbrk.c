#include"main.h"
#include"string.h"
/**
 *  * _strpbrk -  a function that searches a string for any of a set of bytes
 *   * @s: the string to be scanned
 *   * @accept: string containing the character to be matched
 *     * Return: It reurns a pointer the character in s that
 *     matches one of the character in accept
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
