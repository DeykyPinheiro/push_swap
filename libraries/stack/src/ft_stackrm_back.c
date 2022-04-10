/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackrm_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 13:39:55 by demikael          #+#    #+#             */
/*   Updated: 2022/04/10 14:35:04 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_stackrm_back(t_stack **lst)
{
	t_stack *last;

	if (last == NULL)
		return ;
	last = ft_stacklst(*lst);
	if(last->prev == NULL)
		(*lst) = last->next;
	else
		last->prev->next = NULL;
	free(last);
}
