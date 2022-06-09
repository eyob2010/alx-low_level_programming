#include "main.h"
#include "ctype"
int _isdigit(int c)
{
	int i;
	i = isdigit(c);

	if (i == 0)
		return (0);
	else
		return (1);

}
