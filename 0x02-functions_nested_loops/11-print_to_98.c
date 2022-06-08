#include "main.h"
#include "stdio.h"
/**
 *  *print_to_98 - a function that prints all natural numbers from  n to 98
 *   *   *   *   * @n  @m : Accept two integer numbers to be evaluated
 *    * @n : accepts one integer
 *      * Return: the result
*/
void print_to_98(int n)
{
	int i;

	if (n > 100)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}	
	}

	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d", i);
		}
	}
}
