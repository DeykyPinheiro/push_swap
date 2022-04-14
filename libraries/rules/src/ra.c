/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:57 by demikael          #+#    #+#             */
/*   Updated: 2022/04/14 11:24:24 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	ra(t_data *data)
{
	t_stack	*tmp;

	if (data->stack_a && data->stack_a->next)
	{
		tmp = ft_stacklst(data->stack_a);
		tmp->next = data->stack_a;
		data->stack_a->prev = tmp;
		data->stack_a = data->stack_a->next;
		tmp->next->next = NULL;
	}
	write(1, "ra\n", 3);
}
