/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 22:26:20 by demikael          #+#    #+#             */
/*   Updated: 2022/04/14 15:35:55 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *nptr)
{
	size_t	i;
	long int		number;
	int		signal;

	number = 0;
	signal = 1;
	i = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			signal = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		number = (nptr[i] - 48) + (number * 10);
		i++;
	}
	return (number * signal);
}
