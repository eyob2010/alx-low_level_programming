#include"stdlib.h"
#include"lists.h"
/**
 * delete_nodeint_at_index - a function to delete a specific node.
 * @head: pointer to a pointer of a list head.
 * @index: the position the noode expected to be deleted.
 * Return: on success it returns 1, and -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int index1 = index;
	listint_t *temp, *previous;

	temp = *head;
	previous = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	else if (index1 == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		while (index1 != 0)
		{
			previous = temp;
			temp = temp->next;
			index1--;
		}
		previous->next = temp->next;
		free(temp);
		temp = NULL;
		return (1);
	}
}
