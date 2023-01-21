/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_proccess_a_stack.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 05:56:24 by egunday           #+#    #+#             */
/*   Updated: 2023/01/21 10:43:26 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*sa(t_stack *root)
{
	t_stack		*iter;
	int			t1p;

	t1p = 0;
	iter = root;
	t1p = iter->data;
	iter->data = iter->next->data;
	iter->next->data = t1p;
	return (root);
}

t_stack	*pa(t_stack *root)
{
}

t_stack	*ra(t_stack *root)
{
	t_stack		*iter;
	t_stack		*tmp;
	static int	t2p;
	static int	t1p;

	tmp = root;
	iter = root;
	while (iter->next != NULL)
		iter = iter->next;
	while (tmp->next != NULL)
	{
		if (tmp->data == root->data)
		{
			t2p = iter->data;
			iter->data = tmp->data;
		}
		t1p = tmp->data;
		tmp->data = tmp->next->data;
		if (tmp->next->next == NULL)
			tmp->data = t2p;
		tmp = tmp->next;
		tmp->data = t1p;
	}
	return (root);
}

t_stack	*rra(t_stack *root)
{
	t_stack		*iter;
	t_stack		*tmp;
	static int	t2p;
	static int	t1p;

	tmp = root;
	iter = root;
	while (iter->next != NULL)
		iter = iter->next;
	while (tmp->next != NULL)
	{
		if (tmp->data == root->data)
		{
			t2p = tmp->data;
			tmp->data = iter->data;
		}
		tmp = tmp->next;
		t1p = tmp->data;
		tmp->data = t2p;
		t2p = t1p;
	}
	return (root);
}

t_stack	*rr(t_stack *root)
{
}
