/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myclear.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:29:53 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/21 19:55:51 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	myclear(t_stack *stack, int error)
{
	if (error == 1)
	{
		lstclear(&stack);
		ft_putstr_fd("Error\n", STDERR_FILENO);
		exit(1);
	}
	else if (error == 2)
	{
		lstclear(&stack);
	}
}
