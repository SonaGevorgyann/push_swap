/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 22:02:55 by songevor          #+#    #+#             */
/*   Updated: 2024/08/02 22:02:57 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int data)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->data = data;
	head->next = NULL;
	return (head);
}

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

void	del_list(t_list *head)
{
	t_list	*current;
	t_list	*next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	head = NULL;
}

int	min_list(t_list **a)
{
	t_list	*tmp;
	t_list	*next;
	int		min;

	tmp = *a;
	min = tmp->data;
	while (tmp)
	{
		next = tmp->next;
		while (next)
		{
			if (next->data < min)
				min = next->data;
			next = next->next;
		}
		tmp = tmp->next;
	}
	return (min);
}

int	min_index(t_list **a)
{
	t_list	*tmp;
	int		min;
	int		index;

	tmp = *a;
	index = 0;
	min = min_list(a);
	while (tmp->data != min)
	{
		index++;
		tmp = tmp->next;
	}
	return (index);
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
// 	t_list *current = list_init(argc, argv);
// 	printf("index = %d\n", min_index(&current));
// 	print_list(&current);
// }
