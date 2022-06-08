#include "main.h"
/**
 *  *  *  *  *  * jack_bauer - prints every minute of the day
 *   *   *   *   *   * void : Accept nothing
 *  *
 *     *     *     *     *     * Return: every minute of the day
*/
void jack_bauer(void)
{
	int i, j, k, l, m, n, o;

	for (i = 0; i <= 1; i++)
	{
		if (i == 0)
		{
			for (j = 0; j <= 9; j++)
			{
				_putchar('0');
				_putchar(j);
				_putchar(':');
			}
			for (k = 0; k <= 1; k++)
			{
				if (k == 0)
				{
					for (l = 0; l <= 9; l++)
					{
						_putchar('0');
						_putchar(l);
					}
				}
				else
				{
					for (l = 10; l <= 59; l++)
					{
						_putchar(l);
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			for (m = 10; m <= 23; m++)
			{
				_putchar(m);
				_putchar(':');
				for (k = 0; k <= 1; k++)
				{
					if (k == 0)
					{
						for (n = 0; n <= 9; n++)
						{
							_putchar('0');
							_putchar(n);
						}
					}
					else
					{
						for (o = 10; o <= 59; o++)
						{
							_putchar(o);
							_putchar('\n');
						}
					}
				}
			}
		}
	}
}
