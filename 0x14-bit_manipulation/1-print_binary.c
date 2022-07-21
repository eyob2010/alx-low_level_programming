#include"main.h"
#include"stdlib.h"
#include"stdio.h"
/**
 * print_binary - a function to convert decimal to binary.
 * @n; an argument to accept integer.
 * Return; on success it returnes binari.
 */
#define MAX 100
int stack[MAX];
int top = -1;

void print();
void push(int data);
int isFull();
int isEmpty();
int pop();

void print_binary(unsigned long int n)
{
	while (n != 0)
	{
		push (n % 2);
		n = n / 2;
	}
	print();
}
void print()
{
	if (isEmpty())
	{
		printf ("stack under flow");
		exit(1);
	}
	while (! isEmpty())
	{
		printf("%d", pop());
	}
}
void push(int data)
{
	if (isFull())
	{
		printf("stack overflow");
		exit(1);
	}
	top++;
	stack[top] = data;
}
int isFull()
{
	if (top == MAX -1)
		return 1;
	else
		return 0;
}
int isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}
int pop()
{
	int val;
	if (isEmpty())
	{
		printf("stack underflow");
		exit(1);
	}
	val = stack[top];
	top--;
	return val;
}
