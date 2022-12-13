/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:08:06 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/12 23:26:27 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "../libft/libft.h"
#include "push_swap.h"

void	stack_up(t_data *data);
void	lstclear(t_stack **lst);
t_stack *lstcopy(t_stack *head);
void	init_data(t_data *data, char **argv);

void	sort_position(t_data *data)
{
	
}


int main(int argc, char **argv)
{
	t_data data;
	t_stack *dup;

	init_data(&data, argv);
	stack_up(&data);
	data.stack_cpy = lstcopy(data.stack_a);
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
	tmp = data.stack_cpy;
	while (tmp != NULL)
	{
		printf("value -> %d | position -> %d | pointer -> %p\n", tmp->number, tmp->position, tmp->next);
		tmp = tmp->next;
	}
	lstclear(&data.stack_a);
	lstclear(&data.stack_b);
}

int	find_small(t_data *data)
{
	int min;
	t_stack *tmp;
	t_stack *aux;
	
	tmp = data->stack_a;
	aux = data->stack_a->next;
	min = INT_MAX;
	while (tmp != NULL)
	{
		if (min > tmp->number)
			min = tmp->number;
		tmp = tmp->next;
	}
	free(data->stack_a);
	data->stack_a = aux;
	return min;
}

t_stack *lstcopy(t_stack *head)
{
	t_stack *node;
	
    if (head == NULL) {
        return NULL;
    }
    else {
        node = malloc(sizeof(t_stack));
        node->number = head->number;
        node->next = lstcopy(head->next);
    }
    return node;
}

void	stack_up(t_data *data)
{
	int i = 0;
	while (data->argv[++i]) 
		lstadd_back(&data->stack_a, lstnew(ft_atoi(data->argv[i])));
}

void	init_data(t_data *data, char **argv)
{
	data->argv = argv;
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
