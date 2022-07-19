#include"stdlib.h"
#include"lists.h"
/**
 * add_nodeint - a function that add a node at the begining.
 * @head: an argument accept a pointer to a pointer of the header.
 * @n: accepts the data to be insert in to the new node.
 * Return: on success it returns the pointer to the new node address.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	const int data = n;
	listint_t *ptr;
	listint_t *temp = malloc(sizeof(listint_t));

	ptr = *head;
	if (head == NULL)
	{
		free(temp);
		temp = NULL;
	}
	else
	{
	temp->n = data;
	temp->next = ptr;
	*head = temp;
	}
	return (*head);
}
