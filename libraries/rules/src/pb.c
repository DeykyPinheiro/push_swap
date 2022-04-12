/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:55 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 08:53:40 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

void	pb(t_data *data)
{
	int aux;
	// printf("stackANaoExiste: %d\n", !data->stack_a);
	// printf("stackBNaoExiste: %d\n", !data->stack_b);

	aux = data->stack_a->content;

	ft_stackrm_front(&data->stack_a);
	ft_stackadd_front(&data->stack_b, ft_stacknew(aux));
}
