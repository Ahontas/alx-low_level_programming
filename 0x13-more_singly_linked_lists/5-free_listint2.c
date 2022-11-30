#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the head.
 * Description: Sets the head to NULL.
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;

	while (*head)
	{
		new = (*head)->next;
		*head = new;
		free(*head);
	}
	
	(*head) = NULL;
}
