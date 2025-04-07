/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 22:02:04 by songevor          #+#    #+#             */
/*   Updated: 2024/08/02 22:02:08 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	armat(int num)
{
	int	i;

	i = 0;
	while (1)
	{
		if (i * i == num)
			return (i);
		else if (i * i > num)
			return (i - 1);
		i++;
	}
}

int	logaritm(int num)
{
	int	i;

	i = 0;
	while (num)
	{
		num = num / 2;
		i++;
	}
	return (i);
}

void	push_b(t_list **a, t_list **b)
{
	int	n;
	int	size;
	int	counter;

	size = ft_lstsize(*a);
	n = armat(size) + logaritm(size);
	counter = 0;
	while (size)
	{
		if ((*a)->data <= counter)
		{
			pb(a, b);
			rb(b);
			counter++;
			size--;
		}
		else if ((*a)->data <= counter + n)
		{
			pb(a, b);
			counter++;
			size--;
		}
		else
			ra(a);
	}
}

void	push_a(t_list **a, t_list **b)
{
	int	index;
	int	size;

	while (ft_lstsize(*b))
	{
		size = ft_lstsize(*b);
		index = max_index(b);
		if (index < (size + 1) / 2)
		{
			while (index--)
				rb(b);
		}
		else if (index >= (size + 1) / 2)
		{
			while (size - index)
			{
				rrb(b);
				index++;
			}
		}
		pa(b, a);
		size--;
	}
}
