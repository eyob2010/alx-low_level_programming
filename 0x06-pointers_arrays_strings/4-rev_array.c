#include "main.h"
#include "string.h"
/**
 *  * _reverse_array - a function that
 *  reverses the content of an array of integers.
 *   * @a: accepts the pointer
 *    *
 *     * Return: ther reversed pointer
 */
void reverse_array(int *a, int n)
{
	int i, temp, count;

	count = (n / 2);
	for (i = 0; i < count; i++)
	{
		temp = a[i];
		a[i] = a[(n - i) - 1];
		a[(n - i) - 1] = temp;
	}
}
