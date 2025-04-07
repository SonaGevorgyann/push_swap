/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 22:03:15 by songevor          #+#    #+#             */
/*   Updated: 2024/08/02 22:03:19 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **head)
{
	t_list	*tmp;
	int		swap_a;

	if (!head || !(*head) || !(*head)->next)
		return ;
	tmp = *head;
	swap_a = tmp->data;
	tmp->data = tmp->next->data;
	tmp->next->data = swap_a;
}

void	sa(t_list **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	pa(t_list **b, t_list **a)
{
	t_list	*a_head;
	t_list	*b_head;

	if (!b || !(*b))
		return ;
	else
	{
		b_head = *b;
		a_head = *a;
		*b = (*b)->next;
		b_head->next = a_head;
		*a = b_head;
	}
	write(1, "pa\n", 3);
}
