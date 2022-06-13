/**
 *  *  *  swap_int - that swaps the values of two integers
 *    *  @a : Accept the first value
 *     @b : Accepts the second value
 *     *    *    *    *
 *      *     Return: retunes 0 on success
 */
#include "main.h"
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
