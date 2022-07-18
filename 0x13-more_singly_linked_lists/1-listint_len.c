#include"stdlib.h"
#include"lists.h"
/**
 * listint_len - a function that returns the
 * number of elements in a linked listint_t list
 * @h: an argument to accept a pointer to a heade.
 * Return: on success it returns the number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
