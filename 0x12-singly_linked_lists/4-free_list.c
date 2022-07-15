#include "lists.h"
#include "stddef.h"
/**
 * free_list - a function to free linked list memorey
 * @head: the list
 * Return: on success it returns void
 */
void free_list(list_t *head)
{
	list_t *temp_list;

	while (head != NULL)
	{
		temp_list = head;
		head = head->next;
		free(temp_list);
	}
}
