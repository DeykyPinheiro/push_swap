/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:39 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 00:56:55 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	sb(t_data *data)
{
	t_stack *fst;
	t_stack *scg;
	int		fst_n;
	int		scg_n;

	scg_n = data->stack_b->content;
	fst_n = data->stack_b->next->content;
	ft_stackrm_front(&data->stack_b);
	ft_stackrm_front(&data->stack_b);
	fst = ft_stacknew(fst_n);
	scg = ft_stacknew(scg_n);
	ft_stackadd_front(&data->stack_b, scg);
	ft_stackadd_front(&data->stack_b, fst);
}
