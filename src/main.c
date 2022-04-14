/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:07:05 by demikael          #+#    #+#             */
/*   Updated: 2022/04/14 13:28:42 by demikael         ###   ########.fr       */
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

	printf("Index listA ");
	aux = data->stack_a;
	while(aux)
	{
		printf("%d ", aux->index);
		aux = aux->next;
	}
	printf("\n");

	// printf("linkedIndex ");
	// aux = data->stack_a;
	// while(aux)
	// {
	// 	printf("%d ", aux->index);
	// 	aux = aux->next;
	// }
	// printf("\n");

	printf("linked lstA ");
	aux = data->stack_a;
	while(aux)
	{
		printf("%d ", aux->content);
		aux = aux->next;
	}
	printf("\n");

	// printf("linked lstB ");
	// aux = data->stack_b;
	// while(aux)
	// {
	// 	printf("%d ", aux->content);
	// 	aux = aux->next;
	// }
	// printf("\n");
}

int	main(int argc, char *argv[])
{
	t_data	data;

	(void)argc;

	printf("IsValid: %d\n", is_valid_values(argv));
	init_stack(&data, argv);
	normalize(&data);
	organize(&data);
	// print_data(&data);
	// printf("TERMINEI\n");
}
