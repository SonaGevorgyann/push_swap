/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 22:03:05 by songevor          #+#    #+#             */
/*   Updated: 2024/08/02 22:03:07 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	if (valid_all(argc, argv))
	{
		a = list_init(argc, argv);
		if (no_doubles(a))
		{
			list_index(&a);
			sort_all(&a, &b);
			del_list(a);
			return (0);
		}
	}
	write(2, "Error\n", 6);
	exit (1);
	return (0);
}
