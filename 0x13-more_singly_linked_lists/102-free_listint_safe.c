#include"stdlib.h"
#include"lists.h"
/**
 * free_listint_safe - a function that frees a
 * list and return the number of nodes.
 * @h: pointer to a pointer that accepts the head of a list.
 * Return: on success it returns the number of node.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *temp = *h;

	if ((*h) == NULL)
	{
		return (0);
	}
	else
	{
		while ((*h) != NULL)
		{
			i++;
			(*h) = temp->next;
			free(temp);
			temp = NULL;
			temp = *h;
		}
		return (i);
	}
}
