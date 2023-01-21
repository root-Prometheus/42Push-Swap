/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 04:37:01 by egunday           #+#    #+#             */
/*   Updated: 2023/01/21 10:38:47 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct t_data
{
	struct t_data	*next;
	int				data;
}					t_stack;

t_stack	*push(t_stack *stack, int data);
t_stack	*sa(t_stack *root);
t_stack	*ra(t_stack *root);
t_stack	*rra(t_stack *root);
t_stack	*pop(t_stack *node);
t_stack	*three_mem_alg(t_stack *stack);
void	print_stack(t_stack *data);
int		root_chechker(t_stack *stack);

#endif