/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threememalg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 04:42:41 by egunday           #+#    #+#             */
/*   Updated: 2023/01/20 10:49:33 by egunday          ###   ########.fr       */
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

t_stack	*three_mem_alg(t_stack *Stack)
{
	//Random BULLSHIT GOOOOOOOOOOOOOOOOOO
}
