/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:18:56 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/17 20:47:11 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_data *data)
{
	if (data->stack_a->number > data->stack_a->next->number && 
		data->stack_a->number < data->stack_a->next->next->number)
		swap_a(data);
	else if (data->stack_a->number < data->stack_a->next->number)
	{
		reverse_rotate_ra(data);
		if (data->stack_a->number > data->stack_a->next->number)
			swap_a(data);
	}
	else if (data->stack_a->number > data->stack_a->next->number)
	{
		rotate_ra(data);
		if (data->stack_a->number > data->stack_a->next->number)
			swap_a(data);
	}
	
}