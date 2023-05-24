#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a list
 *
 * @head: The address of the pointer to the first element of the list
 * @n: The number to store in the new element
 *
 * Return: A pointer to the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newer;
	dlistint_t *l;

	newer = malloc(sizeof(dlistint_t));
	if (newer == NULL)
	{
		return (NULL);
	}
	newer->n = n;
	newer->next = NULL;
	if (*head == NULL)
	{
		*head = newer;
		newer->prev = NULL;
		return (newer);
	}
	l = *head;
	while (l->next != NULL)
	{
		l = l->next;
	}
	l->next = newer;
	newer->prev = l;
	return (newer);
}
