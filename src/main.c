/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:07:05 by demikael          #+#    #+#             */
/*   Updated: 2022/04/14 16:55:31 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	init_stack(t_data *data, char *argv[])
{
	t_stack	*tmp;
	int		i;

	i = 0;
	data->stack_a = NULL;
	data->stack_b = NULL;
	data->copy = NULL;
	while (argv[++i])
	{
		tmp = ft_stacknew(ft_atoi(argv[i]));
		ft_stackadd_back(&data->stack_a, tmp);
	}
	i = 0;
	while (argv[++i])
	{
		tmp = ft_stacknew(ft_atoi(argv[i]));
		ft_stackadd_back(&data->copy, tmp);
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
		return (start(argc, argv));
}
