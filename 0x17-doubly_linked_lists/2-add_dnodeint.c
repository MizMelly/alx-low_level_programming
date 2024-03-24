#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the front of a d_list
 *
 * @head: double pointer to the head of the list
 * @n: value to be added to the new node
 *
 * Return: pointer to the new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
