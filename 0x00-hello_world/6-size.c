#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	print("Size of a char: %c byte(s)\n", sizeof(a));
	print("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(d));
	printf("Size of a float: %f byte(s)\n", sizeof(e));
	return (0);  
}
