/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demikael <pinheiromikael96@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:53:37 by demikael          #+#    #+#             */
/*   Updated: 2022/04/09 16:58:37 by demikael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
#define STACK_H

# include <stdlib.h>

typedef struct s_stack
{
	struct s_stack	*prev;
	struct s_stack	*next;
	int				index;
	int				content;
}	t_stack;


t_stack	*ft_stacknew(int content);
t_stack	*ft_stacklst(t_stack *lst);
void	ft_stackadd_back(t_stack **lst, t_stack *new);
void	ft_stackadd_front(t_stack **lst, t_stack *new);



#endif
