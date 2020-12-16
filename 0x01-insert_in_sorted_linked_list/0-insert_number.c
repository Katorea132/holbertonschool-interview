#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - Inserts node in correct position
 * @head: head of the linked list
 * @number: The number to insert
 * Return: pointer to the new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *h = *head;

	if (!head)
		return (0);

	new = malloc(sizeof(listint_t) * 1);
	if (!new)
		return (0);
	new->n = number;

	if (!h || number < h->n)
	{
		new->next = h;
		h = new;
		return (new);
	}
	for (; h->next; h = h->next)
	{
		if (number < h->next->n)
		{
			new->next = h->next;
			h->next = new;
			return (new);
		}
	}
	h->next = new;
	new->next = 0;
	return (new);
}
