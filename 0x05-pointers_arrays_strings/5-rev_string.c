#include "main.h"
#include "string.h"
void rev_string(char *s)
{
	int i;

	i = strlen(s);
	i = (i - 1);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
