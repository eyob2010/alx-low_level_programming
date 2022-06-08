#include "main.h"
#include "ctype.h"
/**
 *  *  * _islower - display 1 if the character is lower otherwise 0
 *   *   * in c: Accept the character to be evaluated
 *    *    *
 *     *     * Return: On lower case 1 other wise 0
 *       *       */
int _islower(int c)
{
if (islower(c))
{
	return (1);
}
else
{
	return (0);
}
}
