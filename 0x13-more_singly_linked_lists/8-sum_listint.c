#include"stdlib.h"
#include"lists.h"
/**
 * sum_listint - a function that summs the data in the list.
 * @head: accepts the head of the list
 * Return: on success it returnes the sum of all list data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	ptr = head;
	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		sum = (sum + ptr->n);
		ptr = ptr->next;
	}
	return (sum);
}
