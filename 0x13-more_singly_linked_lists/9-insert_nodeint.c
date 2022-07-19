#include "lists.h"
#include "stdlib.h"
/**
 * insert_nodeint_at_index - a function to add a node at specific position.
 * @head: pointer to a pointer of a list head
 * @idx: the index the position that the new node added
 * @n: the data to be added to the new node
 * Return: on success it returns the new node ptr.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int idx1 = idx;
	int data = n;
	unsigned int count = 0;
	listint_t *ptr, *ptr2;

	ptr = *head;
	ptr2 = malloc(sizeof(listint_t));
	ptr2->n = data;
	ptr2->next = NULL;
	idx1--;
	while (idx1 != 0)
	{
		ptr = ptr->next;
		idx1--;
		count++;
	}
	if (idx >= count)
	{
		ptr = NULL;
		return (ptr);
	}
	else
	{
		ptr2->next = ptr->next;
		ptr->next = ptr2;
		return (ptr2);
	}
}
