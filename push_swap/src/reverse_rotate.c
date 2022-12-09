/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:46:32 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/09 14:22:24 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_rrr(t_data *data)
{
	reverse_rotate_ra(data);
	reverse_rotate_rb(data);
}

void	reverse_rotate_ra(t_data *data)
{
	t_stack	*last;
	t_stack	*penult;

	last = data->stack_a;
	while (last->next != NULL)
	{
		penult = last;
		last = last->next;
	}
	penult->next = NULL;
	last->next = data->stack_a;
	data->stack_a = last;
	last = NULL;
}

void	reverse_rotate_rb(t_data *data)
{
	t_stack	*last;
	t_stack	*penult;

	last = data->stack_b;
	while (last->next != NULL)
	{
		penult = last;
		last = last->next;
	}
	penult->next = NULL;
	last->next = data->stack_b;
	data->stack_b = last;
	last = NULL;
}