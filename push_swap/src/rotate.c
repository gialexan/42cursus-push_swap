/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:19:38 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/09 13:55:57 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_rr(t_data *data)
{
	rotate_ra(data);
	rotate_rb(data);
}

void	rotate_ra(t_data *data)
{
	t_stack *tmp;
	t_stack *head;

	head = data->stack_a;
	tmp = data->stack_a;

	lstadd_back(&tmp, head);
	data->stack_a = head->next;
	head->next = NULL;
	tmp = NULL;
	head = NULL;
}

void	rotate_rb(t_data *data)
{
	t_stack *tmp;
	t_stack *head;

	head = data->stack_b;
	tmp = data->stack_b;

	lstadd_back(&tmp, head);
	data->stack_b = head->next;
	head->next = NULL;
	tmp = NULL;
	head = NULL;
}
