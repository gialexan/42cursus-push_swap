/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:58:12 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/06 12:01:38 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
}