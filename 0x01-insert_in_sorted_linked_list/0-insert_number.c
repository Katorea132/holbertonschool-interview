#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - Inserts new node in correct poshion
 * @head: head of the linked list
 * @number: The number to insert
 * Return: pointer to the new node
 */
listint_t *insert_new(listint_t **head, int number)
{
	listint_t *new;
	listint_t *h;

	if (!head)
		return (0);
	
	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	new->n = number;

	if (!*head || number < (*head)->n)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	h = *head;
	for(h = *head; h->next; h = h->next)
	{
		if (number < h->next->n && number >= h->n)
		{
			new->next = h->next;
			h->next = new;
			return (new);
		}
	}
	new->next = NULL;
	h->next = new;
	return (new);
}
