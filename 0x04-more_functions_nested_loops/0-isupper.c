#include "main.h"
#include "ctype.h"
/**
 *  *  *  *  *  * _isupper - a function that returns if
 *  it's uppervase or not
 *   *   *   *   * @c : Accept one character to be evaluated
 *    * @c : accepts one integer
 *      *     *     *     *     * Return: the result
 */
int _isupper(int c)
{
	int i;

	i = isupper(c);

	if (i == 0)
		return (0);
	else
		return (1);
}
