#include"stdio.h"
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
	printf("%s\n", argv[0]);
	return (0);
}
