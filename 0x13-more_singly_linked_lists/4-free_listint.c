#include "lists.h"

/**
 * free_listint - Entry point
 * @head: first node
 *
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = temp->next;
		free (head);
		head = temp;
	}
}
