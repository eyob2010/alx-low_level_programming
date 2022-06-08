#include "main.h"
#include "ctype.h"
/**
 * main - check the code.
 *  
 * _islower function identifies whether a character is lower or not
 *
 * int c accepts the characters
 *
 * if the character is lower it returns 1 if it is lower otherwise it return 0
*/
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

