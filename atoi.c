/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: songevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 22:01:44 by songevor          #+#    #+#             */
/*   Updated: 2024/08/02 22:01:50 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

int	word_len(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		len++;
		i++;
	}
	return (len);
}

int	at(char *str)
{
	if (word_len(str) > 11)
		return (0);
	else if (ft_atoi(str) > 2147483647 || ft_atoi(str) < (-2147483648))
		return (0);
	else
		return ((int)ft_atoi(str));
}

void	exit_error(t_list *a)
{
	write(2, "Error\n", 6);
	exit (1);
	del_list(a);
}
