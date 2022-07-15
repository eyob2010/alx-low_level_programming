#include "lists.h"
#include "stdint.h"
#include "stdio.h"
#include "stddef.h"
/**
 * print_list - prints linked lists elements
 * @h: head of linked list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *temp;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		i++;
	}
	return (i);
}
