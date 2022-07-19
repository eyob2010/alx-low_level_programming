#include"lists.h"
#include"stdlib.h"
#include"stdio.h"
/**
 * print_listint_safe - used to print lists
 * data and return the number of nodes.
 * @head: a pointer to the head of a list.
 * Return: on success it retuns the number of node.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *temp;

	temp = head;
	if (head == NULL)
	{
		i = 98;
		return (i);
	}
	else
	{
		while (temp != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			i++;
		}
		return (i);
	}
}
