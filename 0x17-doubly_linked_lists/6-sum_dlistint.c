#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of all the data (n) of a list
 * @head: A pointer to the header of the list
 * Return: Sum of elements in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
