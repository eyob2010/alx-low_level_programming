#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
		for (j = i; j < 9; j++)
			if (i < 8)
				putchar(i + '0'), putchar(j + '0'), putchar(','), putchar(' ');
			else
				putchar(i + '0'), putchar(j + '0');
	return (0);
}
