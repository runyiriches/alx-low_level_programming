#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @g: pointer to the list_t list
 *
 * Return: number of elements in g
 */
size_t list_len(const list_t *g)
{
	size_t e = 0;

	while (g)
	{
		e++;
		g = g->next;
	}
	return (e);
}
