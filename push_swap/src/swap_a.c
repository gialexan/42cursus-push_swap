/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:20:28 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/06 18:14:48 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_data *data)
{
	t_stack *tmp;

	tmp = data->stack_a->next->next;
	lstadd_front(&data->stack_a, data->stack_a->next);
	data->stack_a->next->next = tmp;
	tmp = NULL;
}
