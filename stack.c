/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 07:06:52 by egunday           #+#    #+#             */
/*   Updated: 2023/01/23 07:07:25 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*pop(t_stack *node)
{
	t_stack	*iter;

	if (node == NULL)
		perror("we cant pop:stack is empty");
	else
	{
		iter = node;
		while (iter->next != NULL)
		{
			iter = iter->next;
		}
		free(iter);
	}
	return (node);
}

t_stack	*push(t_stack *stack, int data)
{
	t_stack	*temp;

	if (stack == NULL)
	{
		stack = (t_stack *)malloc(sizeof(t_stack) * 2);
		stack->data = data;
		stack->next = NULL;
		return (stack);
	}
	else
	{
		temp = stack;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = (t_stack *)malloc(sizeof(t_stack));
		temp->next->data = data;
		temp->next->next = NULL;
		return (stack);
	}
}