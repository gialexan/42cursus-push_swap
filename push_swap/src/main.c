/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:08:06 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/13 21:43:36 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_up(t_data *data);
void	init_data(t_data *data, char **argv);

void	print(t_stack *head)
{
	t_stack *tmp;
	
	tmp = head;
	while (tmp != NULL)
	{
		printf("value -> %d | position -> %d | pointer -> %p\n", tmp->number, tmp->index, tmp->next);
		tmp = tmp->next;
	}
	printf("\n\n");
}


void	sorted_position(t_data *data)
{
	t_stack *tmp;
	t_stack	*tmp1;

	tmp = data->stack_a;
	while (tmp != NULL)
	{
		tmp->index = 1;
		tmp1 = data->stack_a;
		while (tmp1 != NULL)
		{
			if (tmp->number > tmp1->number)
				tmp->index++;
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;	
	}

}

int main(int argc, char **argv)
{
	t_data data;
	t_stack *dup;

	init_data(&data, argv);
	stack_up(&data);
	sorted_position(&data);
	
	t_stack *tmp;
	tmp = data.stack_a;
	while (tmp != NULL)
	{
		printf("value -> %d | position -> %d | pointer -> %p\n", tmp->number, tmp->index, tmp->next);
		tmp = tmp->next;
	}
	lstclear(&data.stack_a);
	lstclear(&data.stack_b);
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



/* test push
push_b(&data);
push_b(&data);
reverse_rotate_rrr(&data);
printf("-> value(%d) | pointer -> %p\n", data.stack_b->number, data.stack_b->next);
printf("-> value(%d) | pointer -> %p\n", data.stack_b->next->number, data.stack_b->next->next);
push_a(&data);
push_a(&data);
*/
