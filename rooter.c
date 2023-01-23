/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rooter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 07:03:09 by egunday           #+#    #+#             */
/*   Updated: 2023/01/23 10:03:46 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	root_chechker(t_stack *stack)
{
	t_stack	*iter;
    t_stack	*tmp;

    tmp = stack;
	iter = stack;
	while (iter->next != NULL)
	{
		tmp = iter->next;
		while (tmp != NULL)
		{
			if (iter->data == tmp->data)
                exit(write(1,"\nerror",sizeof("\nerror")));
            if (tmp->data == 0)
                exit(write(1,"\nerror",sizeof("\nerror")));
			tmp = tmp->next;
		}
		iter = iter->next;
	}
	return (1);
}

void	test_three(int x, char **root)
{
	t_stack	*root_a;
	int		i;
	int		num;

	num = 0;
	i = 1;
	root_a = NULL;
	while (i != x)
	{
		num = ft_atoi(root[i]);
		root_a = push(root_a, num);
		i++;
	}
	root_chechker(root_a);
	root_a = three_mem_alg(root_a);
	print_stack(root_a);
}

void	test_five(int x, char **root)
{
}

void	test_one_hundred(int x, char **root)
{
}

void	test_five_hundred(int x, char **root)
{
}