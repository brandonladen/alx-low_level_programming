#include <stdio.h>
#include "lists.h"
/**
 * list_len - A function that returns the number of elements in linked list
 * @h: A pointer to memory location
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			count++;
		}
		else
		{
			count++;
		}
		h = h->next;
	}
	return (count);
}
