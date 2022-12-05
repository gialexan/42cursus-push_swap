/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:42:53 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/03 11:50:28 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*lstnew(int number)
{
	t_stack *tmp;
	
	tmp = malloc(sizeof(t_stack));
	if (!tmp)
		return (NULL);
	tmp->number = number;
	tmp->next = NULL;

	return (tmp);
}