#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - A function to insert new node
 * @head: A pointer
 * @idx: The index of the list where to insert node
 * @n: the value to be fed in the list
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev, *after, *new_node;
	unsigned int count;

	count = 0;
	if (*head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	prev = after = *head;

	if (idx == 0)
	{
		new_node->next = prev;
		*head = new_node;
		prev = *head;
	}
	else
	{
		while (prev != NULL)
		{
			after = after->next;
			count++;
			if (count == idx)
			{
				prev->next = new_node;
				new_node->next = after;
				break;
			}
			prev = prev->next;
		}
	}
	return (new_node);
}
