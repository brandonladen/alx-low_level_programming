#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - A function that adds a new node at the beginning of a list_t list
 * @head: A pointer to nulll address
 * @str: String to be printed
 * Return: Address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	ist_t *new;

	if (str == NULL)
	{
		return NULL;
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return NULL;
	}
	new->str = strdup(str);
	new->len = strlen(str);

	if (head = NULL)
	{
		head = new;
	}
	head->next = new;
	new->next = 0;

	printf("[%d] %s\n", new->len, new->str);
	return (new);
}
