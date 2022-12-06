/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:20:32 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/06 18:14:50 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_data *data)
{
	t_stack *tmp;

	tmp = data->stack_b->next->next;
	lstadd_front(&data->stack_b, data->stack_b->next);
	data->stack_b->next->next = tmp;
	tmp = NULL;
}
