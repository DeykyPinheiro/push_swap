/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:27:22 by demikael          #+#    #+#             */
/*   Updated: 2022/04/14 13:28:23 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_stack	*aux;

	aux = stack;
	while (aux && aux->next)
	{
		if ((aux->content > aux->next->content))
			return (0);
		else
			aux = aux->next;
	}
	return (1);
}

void	bubble_sort_index_copy(t_data *data)
{
	t_stack	*aux;
	int		i;

	aux = data->copy;
	while (aux && aux->next)
	{
		if (aux->content > aux->next->content)
		{
			i = aux->content;
			aux->content = aux->next->content;
			aux->next->content = i;
		}
		aux = aux->next;
	}
	if (!is_sorted(data->copy))
		bubble_sort_index_copy(data);
}

void	put_index_copy(t_data *data)
{
	t_stack	*aux;
	int		i;

	i = 1;
	aux = data->copy;
	while (aux)
	{
		aux->index = i;
		aux = aux->next;
		i++;
	}
}

void	put_index_a(t_data *data)
{
	t_stack	*stack_a;
	t_stack	*copy;

	stack_a = data->stack_a;
	copy = data->copy;
	while (copy)
	{
		if (stack_a->content == copy->content)
		{
			stack_a->index = copy->index;
			stack_a = data->stack_a;
			copy = copy->next;
		}
		else if (stack_a->next)
			stack_a = stack_a->next;
	}
}

void	normalize(t_data *data)
{
	bubble_sort_index_copy(data);
	put_index_copy(data);
	put_index_a(data);
}
