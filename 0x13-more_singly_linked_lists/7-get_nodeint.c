#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - A function that returns nth node
 * @head: A pointer
 * @index: The index of the node starting from 0
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		temp = head;
		if (count == index)
		{
			temp = head;
			break;
		}
		head = head->next;
		count++;
	}
	return (temp);
}
