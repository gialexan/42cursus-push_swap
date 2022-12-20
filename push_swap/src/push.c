/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:57:42 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/20 19:56:17 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_data *data)
{
	t_stack	*tmp;

	if (data->stack_a == NULL)
		data->stack_a = lstnew(data->stack_b->number, data->stack_b->index);
	else
		lstadd_front(&data->stack_a,
			lstnew(data->stack_b->number, data->stack_b->index));
	tmp = data->stack_b->next;
	free(data->stack_b);
	data->stack_b = tmp;
	tmp = NULL;
}

void	push_b(t_data *data)
{
	t_stack	*tmp;

	if (data->stack_b == NULL)
		data->stack_b = lstnew(data->stack_a->number, data->stack_a->index);
	else
		lstadd_front(&data->stack_b,
			lstnew(data->stack_a->number, data->stack_a->index));
	tmp = data->stack_a->next;
	free(data->stack_a);
	data->stack_a = tmp;
	tmp = NULL;
}
