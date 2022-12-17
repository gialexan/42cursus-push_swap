/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:42:09 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/17 01:35:00 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static  char	*ignore(char *argv)
{
	char *ref;

	ref = argv;
	
	if (ft_strlen(ref) && ref[0] == '+')
		ref++;
	while(ft_strlen(ref) && ref[0] == '0' && ft_isdigit(ref[1]))
		ref++;
	return (ref);
}

void	stack_up(t_data *data, char **argv)
{
	char	*tmp;
	int		count;
	int		value;
	int		error;

	count = 0;
	error = 0;
	while (argv[++count])
	{
		value = ft_atoi(argv[count]);
		tmp = ft_itoa(value);
		if (ft_strcmp(tmp, ignore(argv[count])))
		{
			error++;
			break;
		}
		else
			lstadd_back(&data->stack_a, lstnew(value, -1));
		free(tmp);
		tmp = NULL;
	}
	free(tmp);
	tmp = NULL;
	if (error > 0)
		myclear(data->stack_a, 1);
}

void	is_sorted_stack(t_data *data)
{
	int count;
	t_stack *head;
	t_stack *ptr;

	head = data->stack_a;
	count = 0;
	while (head->next != NULL)
	{
		ptr = head->next;
		while(ptr != NULL)
		{
			if (head->number == ptr->number)
			{
				count++;
				break;
			}
			ptr = ptr->next;
		}
		head = head->next;
	}
	if (count > 0)
		myclear(data->stack_a, 1);
}