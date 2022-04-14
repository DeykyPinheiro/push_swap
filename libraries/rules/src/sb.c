/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:39 by demikael          #+#    #+#             */
/*   Updated: 2022/04/14 16:22:38 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	sb(t_data *data)
{
	int	tmp;

	if (data->stack_b && data->stack_b->next)
	{
		tmp = data->stack_b->next->content;
		data->stack_b->next->content = data->stack_b->content;
		data->stack_b->content = tmp;
		tmp = data->stack_b->next->index;
		data->stack_b->next->index = data->stack_b->index;
		data->stack_b->index = tmp;
	}
	write(1, "sb\n", 3);
}
