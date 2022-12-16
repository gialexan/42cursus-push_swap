/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:42:09 by gialexan          #+#    #+#             */
/*   Updated: 2022/12/17 00:44:22 by gialexan         ###   ########.fr       */
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