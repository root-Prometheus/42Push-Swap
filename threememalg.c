/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threememalg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 04:42:41 by egunday           #+#    #+#             */
/*   Updated: 2023/01/19 10:18:03 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(t_stack *Stack)
{
}

t_stack	*three_mem_alg(t_stack *Stack)
{
	if (check(Stack))
		return (Stack);
	if (Stack->data > Stack->next->data)
	{
		sa();
		if (check(Stack))
			return (Stack);
	}
	if (Stack->next->data > Stack->next->next->data)
	{
		if (Stack->next->next->data < Stack->data)
		{
			rra();
			if (check(Stack))
				return (Stack);
		}
		if (Stack->next->data > Stack->next->next->data)
		{
			rra();
			sa();
			if (check(Stack))
				return (Stack);
		}
	}
}
