/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:08:06 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/20 20:04:30 by gialexan         ###   ########.fr       */
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
	sort_five(&data);
	print(data.stack_a);
}
