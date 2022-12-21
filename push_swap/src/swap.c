/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:20:28 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/21 11:19:22 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_ss(t_data *data)
{
	swap_a(data);
	swap_b(data);
	write(1, "ss\n", 3);
}

void	swap_a(t_data *data)
{
	t_stack	*tmp;

	if (data->stack_a == NULL || data->stack_a->next == NULL)
    	return;
	tmp = data->stack_a;
	data->stack_a = tmp->next;
	lstadd_front(&data->stack_a, tmp);
	tmp = NULL;
	write(1, "sa\n", 3);
}

void	swap_b(t_data *data)
{
	t_stack *tmp;

	if (data->stack_b == NULL || data->stack_b->next == NULL)
    	return;
	tmp = data->stack_b;
	data->stack_b = tmp->next;
	lstadd_front(&data->stack_b, tmp);
	tmp = NULL;
	write(1, "sb\n", 3);
}
