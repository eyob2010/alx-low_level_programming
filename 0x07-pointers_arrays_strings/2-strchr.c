#include"main.h"
#include"string.h"
/**
 *  * _strchr - a function that locates a character in a string
 *   * @s: Accepts the poiter the c character scanned in
 *   * @c: accepts the character to be searched in the s
 *     * Return: On success returnes the pointer to
 *     the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
