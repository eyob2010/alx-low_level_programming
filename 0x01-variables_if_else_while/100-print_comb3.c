#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, start;

	for (i = 0; i <= 99; i++)
		for (start = i + 1; start <= 9; start++)
			if (i < 8)
				putchar (i + '0'), putchar (start + '0'), putchar (','), putchar (' ');
			else
				putchar (i + '0'), putchar (start + '0'), putchar ('\n');
	return (0);
}
