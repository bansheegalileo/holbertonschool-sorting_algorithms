#include "sort.h"

/**
 * _swap - swap 2nums
 * @a: int
 * @b: int
 **/

void _swap(int *a, int *b)
{
	int uwu;

	uwu = *a;
	*a = *b;
	*b = uwu;
}

/**
 * swap_backward -swapnodes rl
 * @c: list
 *
 **/

void swap_backward(listint_t *c)
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
 * swap_forward -swap2nodes lr
 * @c: list
 *
 **/

void swap_forward(listint_t *c)
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
	swap_backward(c->prev);
}
