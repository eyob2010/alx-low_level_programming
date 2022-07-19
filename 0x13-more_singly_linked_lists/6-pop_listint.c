#include "lists.h"
#include "stdlib.h"
/**
 * pop_listint - a function that removes the head.
 * @head: pointer to  apointer of a head.
 * Return: Onuccess it returns the data in the current head.
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	temp = *head;
	i = temp->n;
	*head = *head->next;
	free(temp);
	temp = NULL;
	return (i);
}
