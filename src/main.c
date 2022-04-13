/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:07:05 by demikael          #+#    #+#             */
/*   Updated: 2022/04/12 23:07:20 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

	// void	free_stack(t_stack **lst)
	// {
	// 	t_list **aux;

	// 	aux = lst;
	// 	while(*lst.next)

	// }

void	init_stack(t_data *data, char *argv[])
{
	t_stack	*tmp;
	int		i;

	i = 0;
	while (argv[++i])
	{
		tmp = ft_stacknew(ft_atoi(argv[i]));
		ft_stackadd_back(&data->stack_a, tmp);
	}
	data->stack_b = NULL;
}


// // main antiga
// int	main(int argc, char *argv[])
// {
// 	(void)argc;
// 	t_stack	*stack_a;
// 	ft_bzero(&stack_a, sizeof(stack_a));

// 	init_stack(&stack_a, argv);
// 	printf("linked list ");
// 	while(stack_a)
// 	{
// 		printf("%d ", stack_a->content);
// 		stack_a = stack_a->next;
// 	}
// 	printf("\n");
// }

int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	t_data data;

	// data = (t_data *)malloc(sizeof(t_data *));



	init_stack(&data, argv);
	pb(&data);
	pb(&data);
	pb(&data);
	pb(&data);
	pb(&data);
	pb(&data);
	pb(&data);
	pb(&data);
	pb(&data);
	pb(&data);
	pb(&data);

	pa(&data);
	pa(&data);
	pa(&data);
	pa(&data);
	pa(&data);
	pa(&data);
	pa(&data);
	pa(&data);
	pa(&data);
	pa(&data);
	pa(&data);

	printf("linked lstA ");
	while(data.stack_a)
	{
		printf("%d ", data.stack_a->content);
		data.stack_a = data.stack_a->next;
	}
	printf("\n");

	printf("linked lstB ");
	while(data.stack_b)
	{
		printf("%d ", data.stack_b->content);
		data.stack_b = data.stack_b->next;
	}
	printf("\n");


}

