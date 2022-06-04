#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			if (j < 9)
				putchar(i + '0'), putchar(j + '0'), putchar(','), putchar(' ');
			else
				putchar(i + '0'), putchar(j + '0');
	return (0);
}
