#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts a new node at an index
 * @h: A pointer to the header of the list
 * @idx: The index of the element in the list
 * @n: Element to be inserted
 * Return: The address of the added element or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *newnode, *temp;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	temp = *h;
	while (temp != NULL)
	{
		if (counter == idx)
		{
			newnode = malloc(sizeof(dlistint_t));
			if (newnode == NULL)
				return (NULL);
			newnode->n = n;
			newnode->next = temp;
			temp->prev->next = newnode;
			newnode->prev = temp->prev->next;
			temp->prev = newnode;
			break;
		}
		temp = temp->next;
		counter++;
	}
	if (idx > counter)
	{
		return (NULL);
	}
	return (newnode);
}
