/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:21:27 by tumolabs          #+#    #+#             */
/*   Updated: 2024/08/02 22:03:55 by songevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	consist(char c, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	plus_minus(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		while (s[i] == ' ' && s[i])
			i++;
		if (s[i] == '-' || s[i] == '+')
		{
			if (i == 0 && !(s[i + 1] >= '0' && s[i + 1] <= '9'))
				return (0);
			else if (i > 0 && !(s[i + 1] >= '0'
					&& s[i + 1] <= '9' && s[i - 1] == ' '))
				return (0);
		}
		i++;
	}
	return (1);
}

int	has_char(char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = "1234567890 -+";
	while (s1[i])
	{
		if (!consist(s1[i], s2))
			return (0);
		i++;
	}
	return (1);
}

int	valid(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(has_char(str)))
			return (0);
		if (!plus_minus(str))
			return (0);
		i++;
	}
	return (1);
}

int	valid_all(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!valid(argv[i]))
			return (0);
		i++;
	}
	return (1);
}
