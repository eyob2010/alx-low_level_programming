#include "main.h"
#include "ctype.h"
/**
 *  *  *  *  *  * _isdigit - a function that tells
 *  if a character is digit or not
 *   *   *   *   * @c : Accept one integer numbers to be evaluated
 *    * @c : accepts one integer
 *      *     *     *     *     * Return: the result
 */
int _isdigit(int c)
{
	int i;

	i = isdigit(c);

	if (i == 0)
		return (0);
	else
		return (1);

}
