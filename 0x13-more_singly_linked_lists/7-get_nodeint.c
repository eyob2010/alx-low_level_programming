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
	unsigned int i;
	listint_t *ptr;

	i = index;
	ptr = head;
	if (i == 0)
	{
		return (head);
	}
	else
	{
		while (i != 0)
		{
			ptr = ptr->next;
			i--;
		}
		if (ptr->next->next != NULL)
		{
			ptr = NULL;
			return (ptr);
		}
		else
		{
			return (ptr);
		}
	}
}
