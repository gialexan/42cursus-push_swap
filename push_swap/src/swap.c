/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:20:28 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/21 20:48:44 by gialexan         ###   ########.fr       */
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
	int		index;
	int		value;

	if (data->stack_a == NULL || data->stack_a->next == NULL)
		return ;
	tmp = data->stack_a;
	value = tmp->number;
	index = tmp->index;
	tmp->index = tmp->next->index;
	tmp->number = tmp->next->number;
	tmp->next->index = index;
	tmp->next->number = value;
	tmp = NULL;
	write(1, "sa\n", 3);
}

void	swap_b(t_data *data)
{
	t_stack	*tmp;
	int		index;
	int		value;

	if (data->stack_b == NULL || data->stack_b->next == NULL)
		return ;
	tmp = data->stack_b;
	value = tmp->number;
	index = tmp->index;
	tmp->index = tmp->next->index;
	tmp->number = tmp->next->number;
	tmp->next->index = index;
	tmp->next->number = value;
	tmp = NULL;
	write(1, "sb\n", 3);
}
