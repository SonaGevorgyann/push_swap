/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 22:03:27 by songevor          #+#    #+#             */
/*   Updated: 2024/08/02 22:03:29 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list **a, t_list **b)
{
	t_list	*a_head;
	t_list	*b_head;

	if (!a || !(*a))
		return ;
	else
	{
		b_head = *b;
		a_head = *a;
		*a = (*a)->next;
		a_head->next = b_head;
		*b = a_head;
	}
	write(1, "pb\n", 3);
}

void	ra(t_list **a)
{
	t_list	*last;
	t_list	*first;

	if (!a || !(*a) || !((*a)->next))
		return ;
	first = *a;
	last = *a;
	*a = first->next;
	while (last->next)
	{
		last = last->next;
	}
	last->next = first;
	first->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	t_list	*last;
	t_list	*first;

	if (!b || !(*b) || !((*b)->next))
		return ;
	first = *b;
	last = *b;
	*b = first->next;
	while (last->next)
	{
		last = last->next;
	}
	last->next = first;
	first->next = NULL;
	write(1, "rb\n", 3);
}

void	rra(t_list **a)
{
	t_list	*last;
	t_list	*first;
	t_list	*node;

	if (!a || !(*a))
		return ;
	first = *a;
	last = *a;
	node = *a;
	while (node->next->next)
		node = node->next;
	while (last->next)
		last = last->next;
	*a = last;
	last->next = first;
	node->next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	t_list	*last;
	t_list	*first;
	t_list	*node;

	if (!b || !(*b))
		return ;
	first = *b;
	last = *b;
	node = *b;
	while (node->next->next)
		node = node->next;
	while (last->next)
		last = last->next;
	*b = last;
	last->next = first;
	node->next = NULL;
	write(1, "rrb\n", 4);
}
