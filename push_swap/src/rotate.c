/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:19:38 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/21 20:50:55 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_rr(t_data *data)
{
	rotate_ra(data);
	rotate_rb(data);
	write(1, "rr\n", 3);
}

void	rotate_ra(t_data *data)
{
	t_stack	*tmp;

	if (data->stack_a == NULL || data->stack_a->next == NULL)
		return ;
	tmp = data->stack_a;
	data->stack_a = tmp->next;
	lstadd_back(&data->stack_a, tmp);
	tmp->next = NULL;
	write(1, "ra\n", 3);
}

void	rotate_rb(t_data *data)
{
	t_stack	*tmp;

	if (data->stack_b == NULL || data->stack_b->next == NULL)
		return ;
	tmp = data->stack_b;
	data->stack_b = tmp->next;
	lstadd_back(&data->stack_b, tmp);
	tmp->next = NULL;
	write(1, "rb\n", 3);
}
