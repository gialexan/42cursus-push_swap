/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:03:52 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/20 20:01:15 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_small_index(t_stack *stack)
{
	int			position;
	static int	index = 1;

	position = 0;
	while (stack)
	{
		position++;
		if (stack->index == index)
			break ;
		stack = stack->next;
	}
	index++;
	return (position);
}

void	small_to_stack_b(t_data *data)
{
	int	tmp;
	int	count;
	int	size_a;

	size_a = lstsize(data->stack_a);
	count = size_a;
	while (count-- > 3)
	{
		tmp = get_small_index(data->stack_a);
		if (tmp >= 3)
		{
			tmp = (size_a + 1) - tmp;
			while (tmp--)
				reverse_rotate_ra(data);
		}
		push_b(data);
		size_a--;
	}
}

void	sort_five(t_data *data)
{
	small_to_stack_b(data);
	sort_three(data);
	push_a(data);
	push_a(data);
	print(data->stack_a);
}
