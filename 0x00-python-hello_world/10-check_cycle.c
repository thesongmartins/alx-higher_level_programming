#include <stdbool.h>
#include "lists.h"

/**
 * check_cycle - function that checks if a singly linked list has a cycle in it
 * @list: pointer to the linked list to check
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *joy = list;
	listint_t *dem = list;

	while (dem != NULL && dem->next != NULL)
	{
		joy = joy->next;
		dem = dem->next->next;

		if (dem == joy)
		{
			return (1);
		}
	}
	return (0);
}
