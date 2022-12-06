/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:57:42 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/06 12:01:41 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_data *data)
{
	t_stack *tmp;
	if (data->stack_a == NULL)
		data->stack_a = lstnew(data->stack_b->number);
	else
		lstadd_front(&data->stack_a, lstnew(data->stack_b->number));
	tmp = data->stack_b->next;
	free(data->stack_b);
	data->stack_b = tmp;
}