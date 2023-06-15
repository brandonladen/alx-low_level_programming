#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: A pointer to the header of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
