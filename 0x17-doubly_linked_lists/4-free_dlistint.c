#include "liss.h"
/**
 * free_dlistint - Frees linked list.
 * @head: head of the linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while(head)
{
	head->next = *tmp;
	free(head)
	head = tmp;
}
}
