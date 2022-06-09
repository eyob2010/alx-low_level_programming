#include "main.h"
#include "ctype.h"
/**
 * *  * _isdidgit - display 1 if the character is number other wise 0
 *  * @c : a member parameter accepts input to be evaluated
 * * *
 *  * Return: On digit 1 other wise 0
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
