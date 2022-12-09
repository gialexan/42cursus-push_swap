/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:08:06 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/09 14:25:28 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include "push_swap.h"

void	stack_up(t_data *data);
void	init_data(t_data *data);
void	lstclear(t_stack **lst);

int main(void)
{
	t_data data;

	init_data(&data);
	stack_up(&data);
	/* test push
	push_b(&data);
	push_b(&data);
	reverse_rotate_rrr(&data);
	printf("-> value(%d) | pointer -> %p\n", data.stack_b->number, data.stack_b->next);
	printf("-> value(%d) | pointer -> %p\n", data.stack_b->next->number, data.stack_b->next->next);
	push_a(&data);
	push_a(&data);
	*/
	t_stack *tmp;
	tmp = data.stack_a;
	while (tmp->next != NULL)
	{
		printf("-> value %d | pointer -> %p\n", tmp->number, tmp->next);
		tmp = tmp->next;
	}
	printf("-> value %d | pointer -> %p\n", tmp->number, tmp->next);
	lstclear(&data.stack_a);
	lstclear(&data.stack_b);
}

void	stack_up(t_data *data)
{
	int i = 0;
	while (++i <= 5)
		lstadd_back(&data->stack_a, lstnew(i));
}

void	init_data(t_data *data)
{
	data->stack_a = NULL;
	data->stack_b = NULL;
}

void	lstclear(t_stack **lst)
{
	t_stack	*tmp;

	while (*lst != NULL)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
	*lst = NULL;
}
