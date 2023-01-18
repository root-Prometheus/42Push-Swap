/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 05:34:07 by egunday           #+#    #+#             */
/*   Updated: 2023/01/07 05:34:08 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*iter;
	t_list	*temp;

	temp = *lst;
	while (temp)
	{
		iter = temp->next;
		if (del)
			del(temp->content);
		free(temp);
		temp = iter;
	}
	*lst = 0;
}
