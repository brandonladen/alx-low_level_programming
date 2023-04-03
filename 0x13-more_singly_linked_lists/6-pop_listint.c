#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - A function that deletes a head node
 * @head: A pointer
 * Return: the deleted data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	temp = *head;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	(*head) = (*head)->next;
	free(temp);

	return (n);
}	
