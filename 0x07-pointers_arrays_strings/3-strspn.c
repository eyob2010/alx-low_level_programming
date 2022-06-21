#include"main.h"
#include"string.h"
/**
 *  * _strspn - a function that gets the length of a prefix substring
 *   * @s: The pointer that holds the string that acccept scanned in
 *   * @accept: string containing the characters to match with s.
 *    *
 *     * Return: On success it return the number of characters in
 *     the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
