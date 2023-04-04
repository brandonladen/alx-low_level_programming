#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - A function to delete node
 * @head: A pointer
 * @index: The index of the node to be deleted
 * Return: 1 if success , -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	unsigned int count;

	if (*head == NULL)
	{
		return (-1);
	}
	temp1 = *head;
	count = 0;
	if (index ==0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}

	while (temp1 != NULL)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		count++;
	}
	if (temp1 == NULL)
	{
		return (-1);
	}
	temp2->next = temp1->next;
	free(temp1);

	return (1);
}
