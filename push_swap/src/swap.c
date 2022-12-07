/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:20:28 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/07 20:37:30 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_ss(t_data *data)
{
	swap_a(data);
	swap_b(data);
}

void	swap_a(t_data *data)
{
	t_stack *tmp;

	tmp = data->stack_a->next->next;
	lstadd_front(&data->stack_a, data->stack_a->next);
	data->stack_a->next->next = tmp;
	tmp = NULL;
}

void	swap_b(t_data *data)
{
	t_stack *tmp;

	tmp = data->stack_b->next->next;
	lstadd_front(&data->stack_b, data->stack_b->next);
	data->stack_b->next->next = tmp;
	tmp = NULL;
}