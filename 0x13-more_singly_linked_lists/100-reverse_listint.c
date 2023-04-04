#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: A poniter
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		return (NULL);
	}
	temp = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = temp->next;
		temp->next = *head;
		(*head) = temp;
	}
	return (*head);
}
