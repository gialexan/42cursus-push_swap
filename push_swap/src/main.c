

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include "push_swap.h"

void	stack_up(t_data *data);
void	init_data(t_data *data, int *array);

int main(void)
{
	int array[] = {1, 2, 3, 4, 5};

	t_data data;

	init_data(&data, array);
	stack_up(&data);
	//printf("-------------------------------------------\n");
	t_stack *tmp;
	tmp = data.stack_a;
	while (tmp->next != NULL)
	{
		printf("%d\n", tmp->number);
		tmp = tmp->next;
	}
}

void	stack_up(t_data *data)
{
	int i = -1;
	while (data->stack[++i])
		lstadd_back(&data->stack_a, lstnew(data->stack[i]));
}

void	init_data(t_data *data, int *array)
{
	data->stack = array;
	data->stack_a = NULL;
	data->stack_b = NULL;
}
