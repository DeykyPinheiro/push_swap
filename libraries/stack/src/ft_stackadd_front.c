/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:24:19 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 10:10:10 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_stackadd_front(t_stack **lst, t_stack *new)
{
	// printf("%d %d\n",!lst, !new );
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		new->prev = NULL;
		new->next = *lst;
		(*lst)->prev = new;
		(*lst) = new;
	}
}
