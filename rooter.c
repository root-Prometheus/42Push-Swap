/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rooter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 06:33:27 by egunday           #+#    #+#             */
/*   Updated: 2023/01/21 10:38:51 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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