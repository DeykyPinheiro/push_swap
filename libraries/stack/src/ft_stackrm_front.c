/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackrm_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 12:32:29 by demikael          #+#    #+#             */
/*   Updated: 2022/04/14 16:24:37 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_stackrm_front(t_stack **lst)
{
	t_stack	*aux;

	aux = *lst;
	if (*lst == NULL)
		return ;
	*lst = aux->next;
	(*lst)->prev = NULL;
	free(aux);
}
