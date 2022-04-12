/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:29:03 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 01:34:39 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	rra(t_data *data)
{
	t_stack	*tmp;
	int		i_tmp;

	// guarda o valor do ultimo
	tmp = ft_stacklst(data->stack_a);
	i_tmp = tmp->content;

	// retira o ultimo
	ft_stackrm_back(&data->stack_a);

	// adciona o primeiro
	tmp = ft_stacknew(i_tmp);
	ft_stackadd_front(&data->stack_a, tmp);
}
