#include"lists.h"
#include"stdio.h"
#include"stdlib.h"
/**
 * print_listint - prints all the content of
 * lists and return the number of nodes.
 * @h: accepts the pointer for the head.
 * Return: On success it returnes the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
