/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:17:43 by demikael          #+#    #+#             */
/*   Updated: 2022/04/14 00:25:12 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	organize_3(t_data *data)
{
	int	a;
	int	b;
	int	c;

	if (ft_stacksize(data->stack_a) == 2 && !is_sorted(data->stack_a))
		sa(data);
	while (!is_sorted(data->stack_a))
	{
	a = data->stack_a->index;
	b = data->stack_a->next->index;
	c = data->stack_a->next->next->index;
		if ((a > b && c > a && c > b) || (a > b && a > c && b > c)
			|| (a < b && b > c && a < c))
			sa(data);
		else if (a > b && a > c)
			ra(data);
		else if (a < b && b > c)
			rra(data);
	}
}

static int	find_index(t_data *data, int index)
{
	int		count;
	t_stack	*stack_temp;

	count = 1;
	stack_temp = data->stack_a;
	while (stack_temp->index != index)
	{
		stack_temp = stack_temp->next;
		count++;
	}
	return (count);
}

void	send_top(t_data *data, int index)
{
	int	size_stack;
	int	tam;

	size_stack = ft_stacksize(data->stack_a) / 2;
	tam = find_index(data, index);
	while ((data->stack_a->index != index))
	{
		if (tam <= size_stack)
			ra(data);
		else
			rra(data);
	}
}

static void	organize_5(t_data *data)
{
	while (!is_sorted(data->stack_a))
	{
		while (ft_stacksize(data->stack_a) != 3 \
		&& ft_stacksize(data->stack_a) != 2)
		{
			send_top(data, 1);
			pb(data);
			send_top(data, 2);
			pb(data);
		}
		organize_3(data);
		pa(data);
		pa(data);
	}
}

void	organize(t_data *data)
{
	int	size_list;

	size_list = ft_stacksize(data->stack_a);
	if (size_list < 4)
		organize_3(data);
	if (size_list < 6)
		organize_5(data);
	else
		radix(data);
}
