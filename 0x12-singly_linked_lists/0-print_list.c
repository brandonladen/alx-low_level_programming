#include <stdio.h>
#include "lists.h"
/**
 * print_list - A function that prints elements in a linked list
 * @h: A pointer to memory location
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		count++;
	}
	if (h->str != NULL)
	{
	printf("[%d] %s\n", h->len, h->str);
	count++;
	}
	h = h->next;
	if (h->str != NULL)
	{
	printf("[%d] %s", h->len, h->str);
	count++;
	}

	printf("\n");
	return (count);
}
