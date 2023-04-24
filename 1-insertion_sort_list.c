#include "sort.h"

/**
 * insertion_sort_list -sort dll with insertion
 * @list: list
 *
 **/

void insertion_sort_list(listint_t **list)
{
	listint_t *c;

	if ((list == NULL) || (*list == NULL) || ((*list)->next == NULL))
		return;
	c = *list;

	while (c->next != NULL)
	{
		if (c->n > c->next->n)
		{
			sworp_lr(c);
		}
		else
			c = c->next;
	}
	while ((*list)->prev != NULL)
		*list = (*list)->prev;
}

/**
 * sworp_rl -swapnodes rl
 * @c: list
 *
 **/

void sworp_rl(listint_t *c)
{
	listint_t *uwu, *hed;

	while (c->prev != NULL)
	{
		if (c->n < c->prev->n)
		{
			uwu = c->prev->prev;
			c->prev->next = c->next;
			c->next = c->prev;
			c->prev->prev = c;
			c->prev = uwu;
			c->next->next->prev = c->next;
			if (uwu != NULL)
				uwu->next = c;
			hed = c;
			while (hed->prev != NULL)
				hed = hed->prev;
			print_list(hed);
		}
		else
			c = c->prev;
	}
}

/**
 * sworp_lr -swap2nodes lr
 * @c: list
 *
 **/

void sworp_lr(listint_t *c)
{
	listint_t *uwu, *hed;

	uwu = c->prev;

	if (uwu != NULL)
	{
		uwu->next = c->next;
		c->next->prev = uwu;
	}
	else
		c->next->prev = NULL;
	c->prev = c->next;
	if (c->next->next != NULL)
	{
		c->next = c->next->next;
		c->prev->next = c;
		c->next->prev = c;
	}
	else
	{
		c->next->next = c;
		c->next = NULL;
	}
	hed = c;
	while (hed->prev != NULL)
		hed = hed->prev;
	print_list(hed);
	sworp_rl(c->prev);
}
