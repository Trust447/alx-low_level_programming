#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t *));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (tmp == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	new->next = NULL;
	new->prev = tmp;
	return (new);
}
