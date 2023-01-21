/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 04:37:42 by egunday           #+#    #+#             */
/*   Updated: 2023/01/21 10:39:50 by egunday          ###   ########.fr       */
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
	t_stack		*root_a;

	root_a = NULL;
	if (argc <= 2)//for read from file (working on....)
		randombullshitgo();//just norm check
	if (argc == 4)
	    test_three(argc,argv);
	if (argc == 5)
	test_five(argc,argv);
	if (argc == 100)
		test_one_hundred(argc,argv);
	else if (argc == 500)
		randombullshitgo();//just norm check
		randombullshitgo();//just norm check
}
