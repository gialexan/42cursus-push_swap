/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:08:06 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/21 20:53:28 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	select_algorithm(t_data *data, int size);

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc < 3)
		return (1);
	data.stack_a = NULL;
	data.stack_b = NULL;
	stack_up(&data, argv);
	is_sorted_stack(&data);
	sorted_position(&data);
	select_algorithm(&data, argc - 1);
	myclear(data.stack_a, 2);
	return (0);
}

static void	select_algorithm(t_data *data, int size)
{
	if (size == 2)
		sort_two(data);
	else if (size == 3)
		sort_three(data);
	else if (size == 5)
		sort_five(data);
	else
		radix_sort(data);
}
