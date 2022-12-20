/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:50:48 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/20 19:54:39 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		ft_printf("value -> %d | index -> %d | pointer -> %p\n",
			tmp->number, tmp->index, tmp->next);
		tmp = tmp->next;
	}
	ft_printf("\n");
}
