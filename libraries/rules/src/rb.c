/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:59 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 01:09:46 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	rb(t_data *data)
{
	t_stack *tmp;
	int		i_tmp;

	i_tmp = data->stack_b->content;
	tmp = ft_stacknew(i_tmp);
	ft_stackrm_front(&data->stack_b);
	ft_stackadd_back(&data->stack_b, tmp);
}
