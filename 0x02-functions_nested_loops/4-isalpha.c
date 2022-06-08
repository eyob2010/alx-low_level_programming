#include "ctype.h"
#include "main.h"
/**
 *  *  *  * _isalpha - display 1 if the character is a letter otherwise 0
 *   *   *   * @c : Accept the character to be evaluated
 *    *    *    *
 *     *     *     * Return: On letter 1 other wise 0
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
