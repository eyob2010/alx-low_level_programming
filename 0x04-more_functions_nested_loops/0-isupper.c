#include "main.h"
#include "ctype.h"
int _isupper(int c)
{
	int i;

	i = isupper(c);

	if (i == 0)
		return (0);
	else
		return (1);
}
