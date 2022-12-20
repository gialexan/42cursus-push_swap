/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsmall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:36:45 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/20 19:53:36 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsmall(t_list *lst)
{
	int		min;
	t_stack	*tmp;

	tmp = *lst;
	min = INT_MAX;
	while (lst != NULL)
	{
		if (min > lst->number)
			min = lst->number;
		lst = lst->next;
	}
	lst = NULL;
	return (min);
}
