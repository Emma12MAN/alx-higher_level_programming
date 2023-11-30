#include "lists.h"

/**
 * check_cycle - Checks if a Linked list contains a Cycle
 * @list: Linked List to check
 * Return: 1 if the List has a Cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
