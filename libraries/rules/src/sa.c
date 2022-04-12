/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:45 by demikael          #+#    #+#             */
/*   Updated: 2022/04/11 16:06:27 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	sa(t_data *data)
{
	t_stack *fst;
	t_stack *scg;
	int		fst_n;
	int		scg_n;

	scg_n = data->stack_a->content;
	fst_n = data->stack_a->next->content;
	ft_stackrm_front(&data->stack_a);
	ft_stackrm_front(&data->stack_a);
	fst = ft_stacknew(fst_n);
	scg = ft_stacknew(scg_n);
	ft_stackadd_front(&data->stack_a, scg);
	ft_stackadd_front(&data->stack_a, fst);
}
