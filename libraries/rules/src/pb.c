/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:55 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 22:45:41 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	pb(t_data *data)
{
	int i;

	if (data->stack_a)
	{
		i = data->stack_a->content;
		if (data->stack_a->next)
		{
			data->stack_a = data->stack_a->next;
			data->stack_a->prev = NULL;
		}
		else
			data->stack_a = NULL;
		ft_stackadd_front(&data->stack_b, ft_stacknew(i));
	}
	write(1, "pb\n", 3);
}
