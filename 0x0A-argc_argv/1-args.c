#include"main.h"
#include"stdlib.h"
#include"stdio.h"
#include"string.h"
/**
 *  *  *  *  * _putchar - a program that
 *  prints its name, followed by a new line.
 *   *   *   *   * @argc: holds the number of arguments
 *    *    *      * @argv: holds the a string of arguments array.
 *     *     *     *     * Return: On success it return 0.
 */
int main(int argc, char *argv[])
{
	int j, i, sum = 0;

	j = strlen(*argv);

		for (i = 1; i < argc; i++)
		{
			sum = (sum + 1);
		}

		if (sum != j)
		{
		printf("%d \n", sum);
		}

		return (0);
}
