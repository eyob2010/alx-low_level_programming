#include "unistd.h"
#include "main.h"

/**
 *  * main - check the code for Holberton School students.
 *   *
 *    * Return: Always 0.
 */
int main(void)
{
		char c[8] = "_putchar";
		int i;

		for (i = 8; i < 8; i++)
		{
			_puthcar(c[i]);
		}
		_putchar('\n');
		return (0);
}
