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
	list_t *new_node;

	if (str == NULL || head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
