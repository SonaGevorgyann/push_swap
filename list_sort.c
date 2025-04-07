/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 22:02:45 by songevor          #+#    #+#             */
/*   Updated: 2024/08/02 22:02:47 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_for_3(t_list **a)
{
	int		max;
	t_list	*tmp;

	tmp = *a;
	max = tmp->data;
	if (tmp->data > tmp->next->data && tmp->data > tmp->next->next->data)
		ra(a);
	else if ((tmp->next->data > tmp->data)
		&& (tmp->next->data > tmp->next->next->data))
		rra(a);
	if ((*a)->data > (*a)->next->data)
		sa(a);
}

void	sort_for_4(t_list **a, t_list **b)
{
	t_list	*tmp;
	int		index;
	int		i;

	tmp = *a;
	index = min_index(a);
	if (index < 2)
	{
		i = index;
		while (i--)
			ra(a);
	}
	else
	{
		i = 4 - index;
		while (i--)
			rra(a);
	}
	pb(a, b);
	sort_for_3(a);
	pa(b, a);
}

void	sort_for_5(t_list **a, t_list **b)
{
	int	index;
	int	i;

	index = min_index(a);
	if (index < 3)
	{
		i = index;
		while (i--)
			ra(a);
	}
	else
	{
		i = 5 - index;
		while (i--)
			rra(a);
	}
	pb(a, b);
	sort_for_4(a, b);
	pa(b, a);
}

int	is_sorted(t_list **a)
{
	t_list	*tmp;

	if (!a || !(*a))
		return (0);
	tmp = *a;
	if (tmp->next == NULL)
		return (1);
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	sort_all(t_list **a, t_list **b)
{
	int	size;

	size = ft_lstsize(*a);
	if (is_sorted(a))
		exit (0);
	else if (size == 2)
	{
		if ((*a)->data > (*a)->next->data)
			sa(a);
	}
	else if (size == 3)
		sort_for_3(a);
	else if (size == 4)
		sort_for_4(a, b);
	else if (size == 5)
		sort_for_5(a, b);
	else
	{
		push_b(a, b);
		push_a(a, b);
	}
}
// void print_list(t_list **lst)
// {
//     int i =0;
//     t_list *tmp = *lst;
//     while(tmp)
//     {
//         printf("%d\n", tmp->data);
//         tmp = tmp->next;
//     }
// }

// int main(int argc, char **argv)
// {
//     t_list *b = malloc(sizeof(t_list));
//     t_list *current = list_init(argc, argv);
//     min_sort(&current, &b);
//     //list_index(&current);
//     print_list(&current);
// }
