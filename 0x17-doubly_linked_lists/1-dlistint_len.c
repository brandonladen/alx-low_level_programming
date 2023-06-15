#include "lists.h"
/**
 * dlistint_len - a function that returns number of elements in a list
 * @h: A pointer to the header of the list
 * Return: number of nodes in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t counter = 0;
	
	if (h == NULL)
	{
		printf("Error: The list is empty");
	}
	temp = h;
	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
