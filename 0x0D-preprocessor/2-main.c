#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"main.h"
/**
 *  * main - a program that prints the name of
 *  the file it was compiled from
 *   * @argc: a parameter accepts the
 *   number of arguments passed
 *   * @argv: holds the arguments in an array
 *    *
 *     * Return: On success retrns the program name
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
