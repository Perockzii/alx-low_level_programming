#include "lists.h"

/**
 * free_listint - function to free linked lists
 * @head: pointer to the first node on the list
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
