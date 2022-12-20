/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:18:56 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/20 20:05:56 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_data *data)
{
	if (data->stack_a->index < data->stack_a->next->index
		&& data->stack_a->next->index < data->stack_a->next->next->index)
		return ;
	else if (data->stack_a->index > data->stack_a->next->index
		&& data->stack_a->index < data->stack_a->next->next->index)
		swap_a(data);
	else if (data->stack_a->index < data->stack_a->next->index)
	{
		reverse_rotate_ra(data);
		if (data->stack_a->index > data->stack_a->next->index)
			swap_a(data);
	}
	else if (data->stack_a->index > data->stack_a->next->index)
	{
		rotate_ra(data);
		if (data->stack_a->index > data->stack_a->next->index)
			swap_a(data);
	}
}
