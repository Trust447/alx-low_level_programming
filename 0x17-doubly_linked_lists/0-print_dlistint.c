#include "main.h"
/**
 * size_t print_dlistint - prints node contents
 * @h: pointer to the node dlistint
 * Return: count which is the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;
	for count = 0; h != NULL; count++;
	{
		printf("%d\n", h -> n);
		h = h -> next
		count++
	}

	return (count);
}
