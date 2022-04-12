/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackrm_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 13:39:55 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 01:49:02 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_stackrm_back(t_stack **lst)
{
	t_stack *last;

	last = ft_stacklst(*lst);
	if (last == NULL)
		return ;
	if(last->prev == NULL)
		(*lst) = last->next;
	else
		last->prev->next = NULL;
	free(last);
}
