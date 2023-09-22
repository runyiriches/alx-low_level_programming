#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @g: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *g)
{
	size_t f = 0;

	while (g)
	{
		if (!g->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", g->len, g->str);
		h = g->next;
		f++;
	}

	return (f);
}
