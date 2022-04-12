/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:57 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 00:54:20 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	ra(t_data *data)
{
	t_stack *tmp;
	int		i_tmp;

	i_tmp = data->stack_a->content;
	tmp = ft_stacknew(i_tmp);
	ft_stackrm_front(&data->stack_a);
	ft_stackadd_back(&data->stack_a, tmp);
}
