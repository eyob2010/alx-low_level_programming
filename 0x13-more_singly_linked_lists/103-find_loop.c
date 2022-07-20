#include"stdlib.h"
#include"lists.h"
/**
 * find_listint_loop - a function which
 * identifi a loop in a linked list
 * @head: a pointer to the head of an argument;
 * Return: when find a oop returns a pointer to the
 * finding oytherwise a returnes NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current = head;
	listint_t *prev = head;

	while (prev && current && current->next)
	{
		prev = prev->next;
		current = current->next->next;
		if (prev == current)
		{
			return (current);
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}
