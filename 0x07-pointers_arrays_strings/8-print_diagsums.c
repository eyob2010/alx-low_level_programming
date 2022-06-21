#include"main.h"
#include"stdio.h"
/**
 *  * print_diagsums -a function that prints the sum of the
 *  two diagonals of a square matrix of integers.
 *   * @a: Accets the matrix
 *   * @size: Accepts the size of an array
 *    *
 *     * Return: On success it return the sum of the diagonals
 */
void print_diagsums(int *a, int size)
{
	int i, sum, count;

	sum = 0;
	count = 0;
	while (count <= 1)
	{
		if (count == 0)
		{
			for (i = 0; a[i][i]; i++)
			{
				sum = (sum + a[i][i]);
			}
			printf("%d, ", sum);
			sum = 0;
		}
		else if (count == 1)
		{
			for (i = 0; i < size; i++)
			{
				sum = (sum + a[i][(size - 1) - i]);
			}
			printf("%d, ", sum);
		}
		count++;
	}
}
