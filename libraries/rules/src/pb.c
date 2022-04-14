/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:55 by demikael          #+#    #+#             */
/*   Updated: 2022/04/14 11:23:30 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	pb(t_data *data)
{
t_stack	*temp;

	if (data->stack_a)
	{
		temp = data->stack_a;
		if (data->stack_a->next)
		{
		data->stack_a= data->stack_a->next;
			data->stack_a->prev = NULL;
		}
		else
			data->stack_a = NULL;
		ft_stackadd_front(&data->stack_b, temp);
	}
	write(1, "pb\n", 3);
}
