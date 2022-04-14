/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:17:55 by demikael          #+#    #+#             */
/*   Updated: 2022/04/14 16:21:56 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_stacks(t_data *data)
{
	t_stack		*temp;

	while (data->stack_a)
	{
		temp = (data->stack_a)->next;
		free(data->stack_a);
		data->stack_a = temp;
	}
	data->stack_a = NULL;

	while (data->copy)
	{
		temp = (data->copy)->next;
		free(data->copy);
		data->copy = temp;
	}
	data->copy = NULL;
}
