/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:01:00 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/06 12:05:44 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	int	number;
	struct	s_stack *next;
	
}	t_stack;

typedef struct s_data
{
	int	*stack;
	t_stack	*stack_a;
	t_stack	*stack_b;
}	t_data;

/* Linked List Function */
t_stack	*lstnew(int number);
t_stack	*lstlast(t_stack *lst);
void	lstadd_back(t_stack **lst, t_stack *new);
void	lstadd_front(t_stack **lst, t_stack *new);

/* Push Swap Function */
void	push_a(t_data *data);
void	push_b(t_data *data);

#endif