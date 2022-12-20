/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliary.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:42:09 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/20 19:59:28 by gialexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	char	*ignore(char *argv)
{
	char	*ref;

	ref = argv;
	if (ft_strlen(ref) && ref[0] == '+')
		ref++;
	while (ft_strlen(ref) && ref[0] == '0' && ft_isdigit(ref[1]))
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
			break ;
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
	int		count;
	t_stack	*head;
	t_stack	*ptr;

	count = 0;
	head = data->stack_a;
	while (head->next != NULL)
	{
		ptr = head->next;
		while (ptr != NULL)
		{
			if (head->number == ptr->number)
			{
				count++;
				break ;
			}
			ptr = ptr->next;
		}
		head = head->next;
	}
	if (count > 0)
		myclear(data->stack_a, 1);
}

void	sorted_position(t_data *data)
{
	t_stack	*tmp;
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
