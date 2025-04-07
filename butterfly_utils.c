/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 22:02:19 by songevor          #+#    #+#             */
/*   Updated: 2024/08/02 22:02:22 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_list(t_list **a)
{
	t_list	*tmp;
	t_list	*next;
	int		max;

	tmp = *a;
	max = tmp->data;
	while (tmp)
	{
		next = tmp->next;
		while (next)
		{
			if (next->data > max)
				max = next->data;
			next = next->next;
		}
		tmp = tmp->next;
	}
	return (max);
}

int	max_index(t_list **a)
{
	t_list	*tmp;
	int		max;
	int		index;

	tmp = *a;
	index = 0;
	max = max_list(a);
	while (tmp->data != max)
	{
		index++;
		tmp = tmp->next;
	}
	return (index);
}
