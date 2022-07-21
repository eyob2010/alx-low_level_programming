#include"main.h"
#include"stdlib.h"
#include"math.h"
#include"ctype.h"
/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int
 * @s: a pinter to the binary string
 * Return: on success it returns the decimal
 * equivalent else, will return 0
 */
int digits_only(const char *s);
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, we = 1, rem, binary, n, bi, re;

	if (b == NULL)
	{
		return (dec);
	}
	n = digits_only(b);
	if (n == 0)
	{
		return (dec);
	}
	else if (n == 1)
	{
		binary = atoi(b);
		bi = atoi(b);
		re = 0;
		while (bi != 0 && re <= 2)
		{
			re = bi % 10;
			re = re * 2;
			bi = bi / 10;
		}
		if (re <= 2)
		{
		while (binary != 0)
		{
			rem = binary % 10;
			dec = dec + (rem * we);
			binary = binary / 10;
			we = we * 2;
		}
		return (dec);
		}
	}
	return (dec);
}
/**
 * digits_only - a function to identify if there
 * is a character in a number.
 * @s: a pointer that holds
 * the string to be tested
 * Return: on success it returns 0 if not digit
 * and 1 if digit
 */
int digits_only(const char *s)
{
	while (*s)
	{
		if (isdigit(*s++) == 0)
			return (0);
	}
	return (1);
}
