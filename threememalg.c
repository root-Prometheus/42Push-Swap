/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threememalg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 04:42:41 by egunday           #+#    #+#             */
/*   Updated: 2023/01/21 10:15:27 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(t_stack *Stack)
{
	t_stack	*iter;
	t_stack	*iterr;

	iterr = Stack;
	iter = Stack;
	while (iterr->next != NULL)
	{
		iterr = iterr->next;
		if (iter->data > iterr->data)
			return (0);
		iter = iter->next;
	}
	return (1);
}

void	print_terminal(int x)
{
	if (x == 1)
		write(1, "sa\n", sizeof("sa\n"));
	if (x == 2)
		write(1, "ra\n", sizeof("ra\n"));
	if (x == 3)
		write(1, "rra\n", sizeof("rra\n"));
}

t_stack	*test_path(int x, t_stack *root)
{
	if (x == 1)
	{
		write(1, "sa\nrra\n", sizeof("sa\nrra\n"));
		return (rra(sa(root)));
	}
	if (x == 2)
	{
		write(1, "sa\n", sizeof("sa\n"));
		return (sa(root));
	}
	if (x == 3)
	{
		write(1, "rra\nrra\n", sizeof("rra\nrra\n"));
		return (rra((rra(root))));
	}
	if (x == 4)
	{
		write(1, "sa\nra\n", sizeof("sa\nra\n"));
		return (sa((rra(root))));
	}
	if (x == 5)
	{
		write(1, "rra\n", sizeof("rra\n"));
		return (rra(root));
	}
}

t_stack	*three_mem_alg(t_stack *stack)
{
	if (check(stack))
		return (stack);
	if (stack->data > stack->next->data)
	{
		if (stack->next->data > stack->next->next->data)
			return (test_path(1, stack));
		if (stack->next->data < stack->next->next->data)
		{
			if (stack->data < stack->next->next->data)
				return (test_path(2, stack));
			if (stack->data > stack->next->next->data)
				return (test_path(3, stack));
		}
	}
	if (stack->data < stack->next->data)
	{
		if (stack->next->data > stack->next->next->data)
		{
			if (stack->data < stack->next->next->data)
				return (test_path(4, stack));
			if (stack->data > stack->next->next->data)
				return (test_path(5, stack));
		}
	}
}
