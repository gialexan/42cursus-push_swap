

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include "push_swap.h"

void	push_a(t_data *data)
{
	t_stack *tmp;
	if (data->stack_a == NULL) {
		data->stack_a = lstnew(data->stack_b->number);
	}
	else {
		lstadd_back(&data->stack_a, lstnew(data->stack_b->number));
	}
	tmp = data->stack_b->next;
	free(data->stack_b);
	data->stack_b = tmp;
}

void	push_b(t_data *data)
{
	t_stack	*tmp;
	if (data->stack_b == NULL)
		data->stack_b = lstnew(data->stack_a->number);
	else
		lstadd_back(&data->stack_b, lstnew(data->stack_a->number));
	tmp = data->stack_a->next;
	free(data->stack_a);
	data->stack_a = tmp;
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

int main(void)
{
	int array[] = {1, 2, 3, 4, 5};

	t_data data;

	init_data(&data, array); //função vai iniciar as struct.
	stack_up(&data); // função de fazer pilha ok.
	//push_b(&data);
	//push_b(&data);

	//printf("%d\n", data.stack_a->number);
	//printf("b->%d\n", data.stack_b->number);
	//printf("b->%d\n", data.stack_b->next->number);
	// printf("%d\n", data.stack_b->next->number);

	push_b(&data);
	// t_stack *tmp = data.stack_a;
	// while (tmp->next != NULL)
	// {
	push_b(&data);
	// 	tmp = tmp->next;
	// }
	// tmp = data.stack_b;
	// while (tmp->next != NULL)
	// {
	// 	printf("%d\n", tmp->number);
	// 	tmp = tmp->next;
	// }
	// printf("->%d\n", size);
	printf("->%d<-\n", data.stack_b->number);
	printf("->%d<-\n", data.stack_b->next->number);
	push_a(&data);
	printf("->%d\n", data.stack_a->number);
	printf("->%d\n", data.stack_a->next->number);
	printf("->%d\n", data.stack_a->next->next->number);
	printf("->%d\n", data.stack_a->next->next->next->number);
	printf("->%d\n", data.stack_a->next->next->next->next->number);

}