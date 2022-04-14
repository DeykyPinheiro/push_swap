/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:15:43 by demikael          #+#    #+#             */
/*   Updated: 2022/04/13 22:52:24 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_data *data)
{
	int	i;
	int	j;
	int	size_a;
	int	size_b;

	i = 0;
	size_a = ft_stacksize((data)->stack_a);
	while (!is_sorted(data->stack_a))
	{
		j = 0;
		while (j < size_a)
		{
			if ((data->stack_a->index >> i) & 1)
				ra(data);
			else
				pb(data);
			j++;
		}
		size_b = ft_stacksize(data->stack_b);
		while ((size_b--))
			pa(data);
		i++;
	}
}
