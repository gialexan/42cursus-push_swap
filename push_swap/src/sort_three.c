/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:18:56 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/21 11:50:05 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_data *data)
{
	int a = data->stack_a->index;
    int b = data->stack_a->next->index;
    int c = data->stack_a->next->next->index;
	
	if (a < b && b < c)
		return ;
	else if (a > b && a < c)
		swap_a(data);
	else if (a < b)
	{
		reverse_rotate_ra(data);
		if (a > b)
			swap_a(data);
	}
	else if (a > b)
	{
		rotate_ra(data);
		if (a > b)
			swap_a(data);
	}
}
