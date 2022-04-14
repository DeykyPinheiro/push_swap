/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:29:39 by demikael          #+#    #+#             */
/*   Updated: 2022/04/13 21:58:34 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RULES_H
# define RULES_H

# include "../../stack/src/stack.h"
# include <stdio.h>
# include <unistd.h>

typedef struct s_data
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*copy;
}	t_data;

void	sa(t_data *data);
void	ra(t_data *data);
void	pb(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	pa(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);

#endif
