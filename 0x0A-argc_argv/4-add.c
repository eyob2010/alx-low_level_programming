#include"main.h"
#include"stdlib.h"
#include"stdio.h"
#include"string.h"
#include"ctype.h"
/**
 *  *  *  *  *  *  *  * _putchar - a program that
 *   *   *   *  prints its name, followed by a new line.
 *    *    *    *   *   *   *   * @argc: holds the number of arguments
 *     *     *     *    *    *      * @argv: holds the
 *     a string of arguments array.
 *      *    * Return: On success it return 0.
 */
int digitcheck(int argc, char *argv);

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc > 2)
	{	j = digitcheck(argc, *argv);
		if ((j + 1) == argc)
		{
			for (i = 1; i < argc; i++)
	{
			sum = (sum + atoi(argv[i]));
	}
	printf("%d\n", sum);
		}
		else if ((j) != argc)
		{
			printf("Error\n");
		}
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}

int digitcheck(int argc, char *argv)
{
	int i, digit = 0;

	for (i = 1; i <= argc; i++)
	{
	if (isdigit(argv[i]) != 0)
	{
		digit = (digit + 1);
	}
		else
		{
			digit--;
		}
	}
	return (digit);
}
