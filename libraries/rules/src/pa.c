/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:28 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 22:45:26 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	pa(t_data *data)
{
	int i;

	if (data->stack_b)
	{
		i = data->stack_b->content;
		if (data->stack_b->next)
		{
			data->stack_b = data->stack_b->next;
			data->stack_b->prev = NULL;
		}
		else
			data->stack_b = NULL;
		ft_stackadd_front(&data->stack_a, ft_stacknew(i));
	}
	write(1, "pa\n", 3);
}
