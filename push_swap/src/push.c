/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:57:42 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/09 13:56:23 by gialexan         ###   ########.fr       */
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
	tmp = NULL;
}

void	push_b(t_data *data)
{
	t_stack	*tmp;
	
	if (data->stack_b == NULL)
		data->stack_b = lstnew(data->stack_a->number);
	else
		lstadd_front(&data->stack_b, lstnew(data->stack_a->number));
	tmp = data->stack_a->next;
	free(data->stack_a);
	data->stack_a = tmp;
	tmp = NULL;
}
