/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_process.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 01:39:09 by egunday           #+#    #+#             */
/*   Updated: 2023/01/19 09:20:48 by egunday          ###   ########.fr       */
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

t_stack	*push(t_stack *Stack, int data)
{
	t_stack	*temp;

	if (Stack == NULL)
	{
		Stack = (t_stack *)malloc(sizeof(t_stack) * 2);
		Stack->data = data;
		Stack->next = NULL;
		return (Stack);
	}
	else
	{
		temp = Stack;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = (t_stack *)malloc(sizeof(t_stack));
		temp->next->data = data;
		temp->next->next = NULL;
		return (Stack);
	}
}
/*
int	main(void)
{
    t_stack* root = NULL;
 
    root = push(root, 10);
    root = push(root, 20);
    root = push(root, 30);
    printf("%d %d %d \n",root->data,root->next->data,root->next->next->data);
    root = pop(root);
    root = push(root,40);
    printf("%d %d %d \n",root->data,root->next->data,root->next->next->data);
    
 
 
    return (0);
}*/
