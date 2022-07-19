#include"stdlib.h"
#include"lists.h"
/**
 * free_listint - a function to free a list
 * @head: an argument to accept a pointer to the head.
 * Return: the function has no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
