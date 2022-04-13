/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:29:03 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 22:42:38 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	rra(t_data *data)
{
	t_stack	*temp;

	if (data->stack_a && data->stack_a->next)
	{
		temp = ft_stacklst(data->stack_a);
		temp->next = data->stack_a;
		data->stack_a ->prev = temp;
		temp->prev->next = NULL;
		temp->prev = NULL;
		ft_stackadd_front(&data->stack_a, temp);
	}
		write(1, "rra\n", 4);
}
