/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:39 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 23:03:00 by demikael         ###   ########.fr       */
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
	}
	write(1, "sa\n", 3);
}
