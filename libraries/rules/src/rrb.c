/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:51 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 22:42:53 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	rrb(t_data *data)
{
	t_stack	*temp;

	if (data->stack_b && data->stack_b->next)
	{
		temp = ft_stacklst(data->stack_b);
		temp->next = data->stack_b;
		data->stack_b ->prev = temp;
		temp->prev->next = NULL;
		temp->prev = NULL;
		ft_stackadd_front(&data->stack_b, temp);
	}
		write(1, "rrb\n", 4);
}
