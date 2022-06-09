#include "main.h"
#include "ctype.h"
int _isupper(int c)
{
	int i, j;

	j = c;
	i = isupper(j);

	if (i == 0)
		return (1);
	else
		return (0);
}
