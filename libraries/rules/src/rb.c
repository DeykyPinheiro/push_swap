/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:59 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 22:36:44 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	rb(t_data *data)
{
	t_stack	*tmp;

	if (data->stack_b && data->stack_b->next)
	{
		tmp = ft_stacklst(data->stack_b);
		tmp->next = data->stack_b;
		data->stack_b->prev = tmp;
		data->stack_b= data->stack_b->next;
		tmp->next->next = NULL;
	}
	write(1, "rb\n", 3);
}
