/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:15:19 by demikael          #+#    #+#             */
/*   Updated: 2022/04/13 14:20:38 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_stackadd_back(t_stack **lst, t_stack *new)
{
	t_stack *last;

	// printf("entrei\n"); //tem dois prints pra apagar
	// printf("%d ", !lst);
	// printf("%d\n", !new);
	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_stacklst(*lst);
		last->next = new;
		new->prev = last;
		new->next = NULL;
	}
}
