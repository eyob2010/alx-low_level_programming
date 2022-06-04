#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
		for (j = i + 1; j <= 9; j++)
			for (k = j + 1; k <= 9; k++)
				if (i < 7)
					putchar(i + '0'), putchar(j + '0'), putchar(k + '0'), putchar(','), putchar(' ');
				else
					putchar (i + '0'), putchar (j + '0'), putchar (k + '0'), putchar ('\n');
	return (0);
}
