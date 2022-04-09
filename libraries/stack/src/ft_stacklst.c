/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacklst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:12:37 by demikael          #+#    #+#             */
/*   Updated: 2022/04/09 16:52:49 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*ft_stacklst(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while(lst->next)
		lst = lst->next;
	return (lst);
}
