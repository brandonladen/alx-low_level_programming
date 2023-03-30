#include <stdio.h>
#include "lists.h"
/**
 * list_len - A function that returns number of elements in a linked list
 * @h: A pointer to memory location
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h->str == NULL)
	{
		count++;
	}
	if (h->str != NULL)
	{
		count++;
	}
	h = h->next;
	if (h->str != NULL)
	{
		count++;
	}
	return (count);
}
