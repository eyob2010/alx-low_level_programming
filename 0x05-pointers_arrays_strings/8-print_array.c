#include "main.h"
#include "stdio.h"
/**
 *  *  print_array - a function that prints n
 *   elements of an array of integers
 *   *    *  @a : Accept the array value
 *    *     @n : is the number of elements of the array to be printed
 *     *     *    *    *    *
 *      *      *     Return: retunes 0 on success
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 1)
	{
		printf(" %d \n", a[0]);
	}
	else if (n > 1)
	{
	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
	}
}
