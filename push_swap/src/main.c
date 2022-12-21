/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:08:06 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/21 13:44:31 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;

	data.stack_a = NULL;
	data.stack_b = NULL;
	stack_up(&data, argv);
	is_sorted_stack(&data);
	sorted_position(&data);
	radix_sort(&data);
	myclear(data.stack_a, 2);
	myclear(data.stack_b, 2);
	return (0);
}
