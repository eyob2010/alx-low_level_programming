int _putchar(char c);
void print_alphabet(void);

void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

int _putchar(char c)
{
		return (write(c));
}
