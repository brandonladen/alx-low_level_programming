#include "lists.h"
/**
 * print_dlistint - A function that prints elements of a list
 * @h: pointer to header of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t counter = 0;

	if (h == NULL)
	{
		return (0);
	}
	temp =  h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		counter++;
		temp = temp->next;
	}
	return (counter);
}
