#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the nth node of a list
 * @head: A pointer to the header of a file
 * @index: Index of thaat specific element
 * Return: A node at that index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
		if (counter == index)
		{
			temp = temp;
			break;
		}
	}
	return (temp);
}
