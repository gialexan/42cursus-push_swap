/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myclear.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:29:53 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/20 22:36:18 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	myclear(t_stack *stack, int error)
{
	if (error == 1)
	{
		lstclear(&stack);
		exit(1);
	}
	else if (error == 2)
	{
		lstclear(&stack);
	}
}
