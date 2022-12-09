#include "lists.h"
/**
 * sum_dlistint - sums up the data of the list.
 * @head: head of the list.
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
