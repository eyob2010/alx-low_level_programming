#include "lists.h"
#include "stddef.h"
/**
 *  * list_len - a function to return the number of elements
 *  linked lists elements
 *   * @h: head of linked list
 *    * Return: On success it prints linked list
 *     * element and return unsigned int
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
