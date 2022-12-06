/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:59:19 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/06 18:14:33 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	if (!*lst)
		*lst = new;
	else
	{
		tmp = lstlast(*lst);
		tmp->next = new;
	}
}
