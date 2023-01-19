/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 04:37:01 by egunday           #+#    #+#             */
/*   Updated: 2023/01/19 10:36:06 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct t_data
{
	struct t_data	*next;
	int				data;
}					t_stack;

t_stack	*push(t_stack *Stack, int data);
t_stack	*pop(t_stack *node);
t_stack	*three_mem_alg(t_stack *Stack);
t_stack	*sa(t_stack *root);
t_stack	*pa(t_stack *root);
t_stack	*ra(t_stack *root);
t_stack	*rra(t_stack *root);
t_stack	*rr(t_stack *root);
t_stack	*sb(t_stack *root);
t_stack	*pb(t_stack *root);
t_stack	*rb(t_stack *root);
t_stack	*rrb(t_stack *root);
t_stack	*rrr(t_stack *root);
void	printTerminal(t_stack *data);
#endif