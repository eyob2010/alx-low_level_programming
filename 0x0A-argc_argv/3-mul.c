#include"main.h"
#include"stdlib.h"
#include"stdio.h"
#include"string.h"
/**
 *  *  *  *  *  *  * _putchar - a program that
 *   *   *  prints its name, followed by a new line.
 *    *    *   *   *   *   * @argc: holds the number of arguments
 *     *     *    *    *      * @argv: holds the a string of arguments array.
 *    * Return: On success it return 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc > 2)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", (num1 * num2));
	}
	else if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
