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
	listint_t *head1;
       
	head1 = *head;
	while (head1 != NULL)
	{
		next = head1->next;
		head1->next = prev;
		prev = head1;
		head1 = next;
	}
	head1 = prev;
	return (head1);
}
