/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 22:02:31 by songevor          #+#    #+#             */
/*   Updated: 2024/08/02 22:02:35 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*list_init(int argc, char **argv)
{
	int		j;
	t_list	*newnode;
	t_list	*current;
	t_list	*head;

	j = 0;
	newnode = NULL;
	current = NULL;
	head = NULL;
	while (++j < argc)
	{
		while (*argv[j])
		{
			if (ft_atoi(argv[j]) > INT_MAX || ft_atoi(argv[j]) < INT_MIN)
				exit_error(head);
			newnode = ft_lstnew(at(argv[j]));
			if (head == NULL)
				head = newnode;
			else
				current->next = newnode;
			current = newnode;
			argv[j] += jump(argv[j]);
		}
	}
	return (head);
}

int	jump(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' && str[i])
		i++;
	while (str[i] && str[i] != ' ')
		i++;
	while (str[i] == ' ' && str[i])
		i++;
	return (i);
}

int	no_doubles(t_list *lst)
{
	t_list	*cur;
	t_list	*tmp;

	if (!lst)
		return (0);
	if (!(lst->next))
		return (1);
	cur = lst;
	tmp = lst;
	while (cur)
	{
		tmp = cur->next;
		while (tmp)
		{
			if (cur->data == tmp->data)
			{
				del_list(lst);
				return (0);
			}
			tmp = tmp->next;
		}
		cur = cur->next;
	}
	return (1);
}

void	list_index(t_list **a)
{
	int	*a1;
	int	*a2;

	a1 = zangvac(*a);
	a2 = sorted_zangvac(a1, *a);
	index_fill(a1, a2, *a);
	index_fill_list(a1, a);
}
