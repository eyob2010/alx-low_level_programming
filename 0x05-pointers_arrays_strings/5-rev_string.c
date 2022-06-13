#include "main.h"
#include "string.h"
#include "stdio.h"
void rev_string(char *s)
{
	int i;

	i = strlen(s);
	i = (i - 1);

	while (s[i] >= '\0')
	{
		_putchar(s[i]);
		i--;
	}

}
