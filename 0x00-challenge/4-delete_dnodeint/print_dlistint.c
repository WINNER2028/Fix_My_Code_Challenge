#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints a doubly linkedlist of integers
 *
 * @h: A pointer to the first element of a list
 *
 * Return: The number of element printed
 */
size_t print_dlistint(const dlistint_t *z)
{
	size_t n;

	n = 0;
	while (z)
	{
		printf("%d\n", z->n);
		z = z->next;
		n++;
	}
	return (n);
}
