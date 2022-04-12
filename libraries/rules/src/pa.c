/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:28 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 01:09:00 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	pa(t_data *data)
{
	int aux;
	// printf("stackANaoExiste: %d\n", !data->stack_a);
	// printf("stackBNaoExiste: %d\n", !data->stack_b);

	aux = data->stack_b->content;
	ft_stackrm_front(&data->stack_b);
	ft_stackadd_front(&data->stack_a, ft_stacknew(aux));
}
