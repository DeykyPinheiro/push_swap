/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:29:57 by demikael          #+#    #+#             */
/*   Updated: 2022/04/13 15:25:30 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libraries/libft/src/libft.h"
#include "../libraries/stack/src/stack.h"
#include "../libraries/rules/src/rules.h"

int		is_sorted(t_stack *stack);
void	bubble_sort_index_copy(t_data *data);
void	put_index_copy(t_data *data);
void	put_index_a(t_data *data);
void	normalize(t_data *data);
void	organize(t_data *data);

#endif
