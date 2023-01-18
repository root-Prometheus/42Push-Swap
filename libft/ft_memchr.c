/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 05:35:05 by egunday           #+#    #+#             */
/*   Updated: 2023/01/07 05:35:06 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_str;

	ptr_str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr_str[i] == (unsigned char)c)
			return (ptr_str + i);
		i++;
	}
	return (NULL);
}
