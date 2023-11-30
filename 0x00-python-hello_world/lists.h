#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_s - Singly Linked List
 * @n: Integer
 * @next: Points to the Next Node
 * Description: Singly Linked List Node Structure
 * for alx-higher_level_programming project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
