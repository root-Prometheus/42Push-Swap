/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printTerminal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 04:44:21 by egunday           #+#    #+#             */
/*   Updated: 2023/01/21 10:28:29 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *data)
{
	while (data != NULL)
	{
		printf("%d", data->data);
		data = data->next;
	}
}