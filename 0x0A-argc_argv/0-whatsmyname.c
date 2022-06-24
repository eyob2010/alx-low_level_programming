#include"main.h"
#include"stdlib.h"
#include"stdio.h"
/**
 *  *  *  * _putchar - a program that prints its name, followed by a new line.
 *   *   *   * @argc: holds the number of arguments
 *    *      * @argv: holds the a string of arguments array.
 *     *     *     * Return: On success it return 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
	return (0);
}
