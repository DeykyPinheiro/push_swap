/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:51 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 01:51:01 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	rrb(t_data *data)
{
	t_stack	*tmp;
	int		i_tmp;

	// guarda o valor do ultimo
	tmp = ft_stacklst(data->stack_b);
	i_tmp = tmp->content;
	printf("valor da temporaria: %d\n", i_tmp);

	// retira o ultimo
	ft_stackrm_back(&data->stack_b);

	// adciona o primeiro
	tmp = ft_stacknew(i_tmp);
	ft_stackadd_front(&data->stack_b, tmp);
}
