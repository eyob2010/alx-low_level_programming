#include "main.h"
void more_numbers(void)
{
	char i;
	int j = 0;

	while (j <= 1)
	{
	if (j == 0)
		{
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
		}
		else
		{
			for (k = 0; k <= 4; k++)
			{
				_putchar(1), _putchar(k);
			}
		}
		j++
	}
	_putchar('\n');
}
