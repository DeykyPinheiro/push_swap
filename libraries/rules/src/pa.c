/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:28 by demikael          #+#    #+#             */
/*   Updated: 2022/04/14 11:21:56 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	pa(t_data *data)
{
	t_stack	*temp;

	if ((data->stack_b))
	{
		temp = data->stack_b;
		if (data->stack_b->next)
		{
			data->stack_b = data->stack_b->next;
			data->stack_b->prev = NULL;
		}
		else
			data->stack_b = NULL;
		ft_stackadd_front(&data->stack_a, temp);
	}
	write(1, "pa\n", 3);
}
