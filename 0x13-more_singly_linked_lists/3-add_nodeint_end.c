#include"stdlib.h"
#include"lists.h"
/**
 * add_nodeint_end - a function to add node at the end of a list
 * @head: a pointer to a pointer of a list head
 * @n: accepts the data to be stored in the new node
 * Return: on success it returnes the address of the last node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	const int data = n;
	listint_t *ptr, *temp;

	temp = malloc(sizeof(listint_t));
	ptr = *head;
	if (*head == NULL)
	{
		return (*head);
	}
	else
	{
	temp->n = data;
	temp->next = NULL;
	while (ptr != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	}
	return (*head);
}
