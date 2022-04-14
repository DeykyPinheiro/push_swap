/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:07:05 by demikael          #+#    #+#             */
/*   Updated: 2022/04/13 15:26:46 by demikael         ###   ########.fr       */
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

void print_data(t_data *data)
{

	t_stack *aux;

	// printf("linked Norm ");
	// aux = data->copy;
	// while(aux)
	// {
	// 	printf("%d ", aux->index);
	// 	aux = aux->next;
	// }
	// printf("\n");

	// printf("linked list ");
	// aux = data->copy;
	// while(aux)
	// {
	// 	printf("%d ", aux->content);
	// 	aux = aux->next;
	// }
	// printf("\n");

	printf("linkedIndex ");
	aux = data->stack_a;
	while(aux)
	{
		printf("%d ", aux->index);
		aux = aux->next;
	}
	printf("\n");

	printf("linked lstA ");
	aux = data->stack_a;
	while(aux)
	{
		printf("%d ", aux->content);
		aux = aux->next;
	}
	printf("\n");

	printf("linked lstB ");
	aux = data->stack_b;
	while(aux)
	{
		printf("%d ", aux->content);
		aux = aux->next;
	}
	printf("\n");
}




int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	t_data data;

	init_stack(&data, argv);
	normalize(&data);
	organize(&data);

	print_data(&data);
}


