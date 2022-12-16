/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:08:06 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/16 20:21:45 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print(t_stack *head);
int		stack_up(t_data *data, char **argv);
void	radix_sort(t_data *data);
void	sorted_position(t_data *data);

int	valid_stack(t_stack *stack)
{
	int	index;

	index = 1;
	while (stack->next)
	{
		if (stack->number > stack->next->number)
			return (index);
		stack = stack->next;
		index++;
	}
	return (0);
}

char	*ignore(char *argv)
{
	char *ref;

	ref = argv;
	
	if (ft_strlen(ref) && ref[0] == '+')
		ref++;
	while(ft_strlen(ref) && ref[0] == '0' && ft_isdigit(ref[1]))
		ref++;
	return (ref);
}

int main(int argc, char **argv)
{
	t_data data;

	data.stack_a = NULL;
	data.stack_a = NULL;
	if (stack_up(&data, argv))
		return (1);
	sorted_position(&data);
	radix_sort(&data);
	print(data.stack_a);
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

void	print(t_stack *head)
{
	t_stack *tmp;
	
	tmp = head;
	while (tmp != NULL)
	{
		printf("value -> %d | index -> %d | pointer -> %p\n", tmp->number, tmp->index, tmp->next);
		tmp = tmp->next;
	}
	printf("\n\n");
}

int	stack_up(t_data *data, char **argv)
{
	int		i;
	char	*tmp;
	int		value;

	i = 0;
	while (argv[++i])
	{
		value = ft_atoi(argv[i]);
		tmp = ft_itoa(value);
		if (ft_strcmp(tmp, ignore(argv[i])))
		{
			free(tmp);
			tmp = NULL;
			return (1);
		}
		else
			lstadd_back(&data->stack_a, lstnew(value, -1));
		free(tmp);
		tmp = NULL;
	}
	data->stack_b = NULL;
	return (0);
}

void	radix_sort(t_data *data)
{	
	int count;
	int	house;
	int size_a;
	int	size_b;
	int i;
	t_stack *tmp;
	
	house = -1;
	size_a = lstsize(data->stack_a);
	i = -1;
	while(valid_stack(data->stack_a))    //while(++i < size_a)
	{
		count = 0;
		house++;
		while (count++ < size_a)
		{				
			if (((data->stack_a->index >> house)&1) == 1)
				rotate_ra(data);
			else
				push_b(data);
		}
		size_b = lstsize(data->stack_b);
		while(size_b--)
			push_a(data);
	}
}
