/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:29:33 by demikael          #+#    #+#             */
/*   Updated: 2022/04/14 16:40:35 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		start(int argc, char *argv[])
{
	t_data	data;

	(void)argc;
	if (is_valid_values(argv))
	{
		init_stack(&data, argv);
		normalize(&data);
		organize(&data);
		free_stacks(&data);
		return (0);
	}
	write(1, "Error\n", 6);
	return (1);
}
