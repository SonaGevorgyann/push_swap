/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:21:01 by tumolabs          #+#    #+#             */
/*   Updated: 2024/07/22 19:21:12 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_list
{
	struct s_list	*next;
	int				data;
}					t_list;

int		consist(char c, char *s);
int		plus_minus(char *s);
int		has_char(char *s1);
int		valid(char *str);
int		valid_all(int argc, char **argv);
long	ft_atoi(char *str);
int		word_len(char *str);
int		at(char *str);
int		jump(char *str);
t_list	*ft_lstnew(int data);
t_list	*list_init(int argc, char **argv);
void	del_list(t_list *head);
int		ft_lstsize(t_list *lst);
int		no_doubles(t_list *lst);
void	swap(t_list **head);
void	sa(t_list **a);
void	sb(t_list **b);
void	pb(t_list **a, t_list **b);
void	pa(t_list **b, t_list **a);
void	ra(t_list **a);
void	rb(t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
int		*zangvac(t_list *a);
int		*sorted_zangvac(int *m, t_list *a);
void	sort_int_tab(int *tab, int size);
void	index_fill(int *ar1, int *ar2, t_list *a);
void	index_fill_list(int *m, t_list **a);
void	list_index(t_list **a);
void	sort_all(t_list **a, t_list **b);
void	sort_for_3(t_list **a);
void	sort_for_4(t_list **a, t_list **b);
void	sort_for_5(t_list **a, t_list **b);
int		min_list(t_list **a);
int		min_index(t_list **a);
int		armat(int num);
int		logaritm(int num);
void	push_b(t_list **a, t_list **b);
int		max_list(t_list **a);
int		max_index(t_list **a);
void	push_a(t_list **a, t_list **b);
void	exit_error(t_list *a);

#endif