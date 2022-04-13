/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:45 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 23:02:56 by demikael         ###   ########.fr       */
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
	}
	write(1, "sa\n", 3);
}
