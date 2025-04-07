/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_zang.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 22:03:42 by songevor          #+#    #+#             */
/*   Updated: 2024/08/02 22:03:44 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*zangvac(t_list *a)
{
	int		i;
	int		*res;
	t_list	*tmp;

	i = 0;
	tmp = a;
	if (!a)
		return (NULL);
	res = malloc(sizeof(int) * ft_lstsize(a));
	if (!res)
		return (NULL);
	while (tmp)
	{
		res[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	return (res);
}

int	*sorted_zangvac(int *m, t_list *a)
{
	int	i;
	int	j;
	int	*res;

	i = 0;
	j = 0;
	while (m[i])
		i++;
	res = malloc(sizeof(int) * ft_lstsize(a));
	if (!res)
		return (NULL);
	while (j < ft_lstsize(a))
	{
		res[j] = m[j];
		j++;
	}
	sort_int_tab(res, ft_lstsize(a));
	return (res);
}

void	sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

void	index_fill(int *ar1, int *ar2, t_list *a)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = ft_lstsize(a);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (ar1[i] == ar2[j])
			{
				ar1[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	free(ar2);
}

void	index_fill_list(int *m, t_list **a)
{
	int		i;
	t_list	*tmp;

	tmp = *a;
	i = 0;
	while (tmp)
	{
		tmp->data = m[i];
		i++;
		tmp = tmp->next;
	}
	free(m);
}
