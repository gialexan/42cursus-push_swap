/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:19:10 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/21 13:45:43 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->index > stack->next->index)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	radix_sort(t_data *data)
{	
	int		i;
	int		count;
	int		house;
	int		size_a;
	int		size_b;

	i = -1;
	house = -1;
	size_a = lstsize(data->stack_a);
	while (!is_sorted(data->stack_a))
	{
		count = 0;
		house++;
		while (count++ < size_a)
		{
			if (((data->stack_a->index >> house) & 1) == 1)
				rotate_ra(data);
			else
				push_b(data);
		}
		size_b = lstsize(data->stack_b);
		while (size_b--)
			push_a(data);
	}
}
