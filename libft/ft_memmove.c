/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 05:35:30 by egunday           #+#    #+#             */
/*   Updated: 2023/01/07 05:35:31 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;
	char	*tmp_src;

	if (!dst && !src)
		return (0);
	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	if (src >= dst)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			tmp_dst[len] = tmp_src[len];
	}
	return (dst);
}
