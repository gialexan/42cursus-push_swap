

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include "push_swap.h"

void	stack_up(t_data *data);
void	init_data(t_data *data);


int main(void)
{
	t_data data;

	init_data(&data);
	stack_up(&data);
	
	t_stack *tmp;
	tmp = data.stack_a;
	while (tmp->next != NULL)
	{
		printf("-> value %d | pointer -> %p\n", tmp->number, tmp->next);
		tmp = tmp->next;
	}
	printf("-> value %d | pointer -> %p\n", tmp->number, tmp->next);
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
