/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:01:00 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/07 19:09:14 by gialexan         ###   ########.fr       */
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
	t_stack	*stack_a;
	t_stack	*stack_b;
	int	stack[];
}	t_data;

/* Linked List Function */
int		lstsize(t_stack *lst);
t_stack	*lstnew(int number);
t_stack	*lstlast(t_stack *lst);
void	lstadd_back(t_stack **lst, t_stack *new);
void	lstadd_front(t_stack **lst, t_stack *new);

/* Push Swap Function */
void	push_a(t_data *data);
void	push_b(t_data *data);
void	swap_a(t_data *data);
void	swap_b(t_data *data);
void	swap_ss(t_data *data);

#endif