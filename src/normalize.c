/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:27:22 by demikael          #+#    #+#             */
/*   Updated: 2022/04/13 14:29:07 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted_copy(t_data *data)
{
	t_stack	*aux;

	aux = data->copy;
	while (aux && aux->next)
	{
		if ((aux->content > aux->next->content))
			return (0);
		else
			aux = aux->next;
	}
	return (1);
}

static void	bubble_sort_index_copy(t_data *data)
{

	int i;
	t_stack	*aux;

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
	if (!is_sorted_copy(data))
		bubble_sort_index_copy(data);
}

static void	put_index_copy(t_data *data)
{
	t_stack *aux;
	int i;

	i = 1;
	aux = data->copy;
	while(aux)
	{
		aux->index = i;
		 aux = aux->next;
		 i++;
	}
}

static void	put_index_a(t_data *data)
{
	t_stack *stack_a;
	t_stack *copy;

	stack_a = data->stack_a;
	copy = data->copy;
	while (copy)
	{
		if (stack_a->content == copy->content)
		{
			stack_a->index= copy->index;
			stack_a = data->stack_a;
			copy = copy->next;
		}
		else if (stack_a->next)
			stack_a = stack_a->next;
	}
}

void normalize(t_data *data)
{
	bubble_sort_index_copy(data);
	put_index_copy(data);
	put_index_a(data);
}
