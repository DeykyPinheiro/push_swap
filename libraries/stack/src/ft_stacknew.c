/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:54:28 by demikael          #+#    #+#             */
/*   Updated: 2022/04/09 16:53:58 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*ft_stacknew(int content)
{
	t_stack *element;

	element = (t_stack *)malloc(sizeof(t_stack));
	if(!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	element->prev = NULL;
	return (element);
}
