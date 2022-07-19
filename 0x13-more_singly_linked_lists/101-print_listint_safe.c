#include"lists.h"
#include"stdlib.h"
#include"stdio.h"
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *temp;
	
	temp = head;
	if (head == NULL)
	{
		i = 98;
		return (i);
	}
	else
	{
		while (temp != NULL)
		{
			printf("[%p] %d\n", temp->next, temp->n );
			temp = temp->next;
			i++;
		}
		return (i);
	}
}
