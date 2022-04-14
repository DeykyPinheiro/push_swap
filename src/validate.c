/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:32:41 by demikael          #+#    #+#             */
/*   Updated: 2022/04/14 16:49:04 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_between_int(long n)
{
	return (n <= INT_MAX && n >= INT_MIN);
}

int	is_int_value(char *str)
{
	int	i;

	i = -1;
	if ((str[0] == '+' || str[0] == '-') && (str[1]))
		i++;
	while (str[++i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
	}
	return (1);
}

int	is_duplicate_values(char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (argv[++i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
	}
	return (0);
}

int	is_valid_values(char *argv[])
{
	int	i;

	i = 0;
	while (argv[++i])
	{
		if (!is_int_value(argv[i]))
			return (0);
		else if (!is_between_int(ft_atoi(argv[i])))
			return (0);
	}
	if (is_duplicate_values(argv))
		return (0);
	return (1);
}
