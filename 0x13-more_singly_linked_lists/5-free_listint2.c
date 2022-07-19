#include"lists.h"
#include"stdlib.h"
/**
 * free_listint2 - a function that frees a list
 * @head: pointer to a pointer argument of the head.
 * Return: On success the function returnes nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
