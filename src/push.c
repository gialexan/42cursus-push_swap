/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:57:42 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/21 20:48:14 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_data *data)
{
	t_stack	*tmp;

	if (data->stack_a == NULL)
		return ;
	tmp = data->stack_a;
	data->stack_a = tmp->next;
	tmp->next = data->stack_b;
	data->stack_b = tmp;
	write(1, "pb\n", 3);
}

void	push_a(t_data *data)
{
	t_stack	*tmp;

	if (data->stack_b == NULL)
		return ;
	tmp = data->stack_b;
	data->stack_b = tmp->next;
	tmp->next = data->stack_a;
	data->stack_a = tmp;
	write(1, "pa\n", 3);
}
