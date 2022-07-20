#include"lists.h"
#include"stdlib.h"
/**
 * reverse_listint - a function that reverses a list.
 * @head: argument for pointer to apointer of a lists head.
 * Return: on success it returnes the reversed list head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;
       
	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	return (prev);
}
