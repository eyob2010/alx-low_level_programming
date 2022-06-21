#include"main.h"
#include"string.h"
/**
 *  * _strstr - a function that locates a substring.
 *   * @haystack: The main C ctring to be scanned
 *   * @needle: The small string to be searched with-in haystack string
 *     * Return: a pointer to the first occurence in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
