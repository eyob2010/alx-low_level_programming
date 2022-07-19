#include"stdlib.h"
#include"lists.h"
/**
 * get_nodeint_at_index - a function returns the node at specific index
 * @head: accepts the address of the head of the node
 * @index: an argument which accepts the specific index
 * Return: on success it return specified node of the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, count = 0;

	i = index;
	listint_t *ptr;

	ptr = head;
	if (head == NULL)
	{
		return (head);
	}
	else if (i > 0)
	{
		count++;
		for (j = 0; j <= i; j++)
		{
			ptr = ptr->next;
			count--;
		}
		return (ptr);
	}
	else
		return (head = NULL);
}
