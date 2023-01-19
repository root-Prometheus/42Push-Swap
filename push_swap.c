/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 04:37:42 by egunday           #+#    #+#             */
/*   Updated: 2023/01/19 11:19:26 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	root_chechker(t_stack *stack)
{
	t_stack	*iter;

	iter = stack;
	while (iter->next != NULL)
	{
		if (iter->data == iter->next->data)
			exit(write(1, "\nError", sizeof("\nError")));
		if (iter->data == 0)
			exit(write(1, "\nError", sizeof("\nError")));
		iter = iter->next;
	}
	return (1);
}

int	main(int argc, char **argv)// more than  25 line and check the three_mem_alg
{
	static int	i;
	t_stack		*rootA;

	rootA = NULL;
	if (argc <= 2)//for read from file (working on....)
		randombullshitgo();//just norm check
	else if (argc == 3)
	{
		while (++i)
			rootA = push(rootA, ft_atoi(*argv[i]));
		root_chechker(rootA);
		printTerminal(rootA = three_mem_alg(rootA));
	}
	else if (argc == 5)
		randombullshitgo();//just norm check
	else if (argc == 100)
		randombullshitgo();//just norm check
	else if (argc == 500)
		randombullshitgo();//just norm check
	else
	{
		while (*argv[++i] != '\0')
			rootA = push(rootA, ft_atoi(*argv[i]));
		root_chechker(rootA);
		randombullshitgo();//just norm check
	}
}
