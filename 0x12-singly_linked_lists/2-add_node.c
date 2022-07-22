#include "lists.h"
#include "stddef.h"
#include "stdlib.h"
#include "string.h"
/**
 *  * add_node - add a new list to the list
 *   * @head: The first list
 *   * @str: accepts the value to be added
 *    *
 *     * Return: It retunes the linked lists
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	const char *txt = str;

	newNode	= malloc(sizeof(list_t));
	newNode->str = strdup(txt);
	newNode->next = NULL;
	newNode->next = *head;
	*head = newNode;
	return ((*head));

}
