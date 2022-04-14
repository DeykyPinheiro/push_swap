/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:45 by demikael          #+#    #+#             */
/*   Updated: 2022/04/14 16:23:16 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	sa(t_data *data)
{
	int	tmp;

	if (data->stack_a && data->stack_a->next)
	{
		tmp = data->stack_a->next->content;
		data->stack_a->next->content = data->stack_a->content;
		data->stack_a->content = tmp;
		tmp = data->stack_a->next->index;
		data->stack_a->next->index = data->stack_a->index;
		data->stack_a->index = tmp;
	}
	write(1, "sa\n", 3);
}
