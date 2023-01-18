/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 05:36:56 by egunday           #+#    #+#             */
/*   Updated: 2023/01/07 05:36:57 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	temp;

	i = 0;
	temp = 0;
	if (dst && src)
	{
		while (src[temp] != '\0')
			temp++;
		while (src[i] != '\0' && i + 1 < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		if (dstsize != 0)
			dst[i] = '\0';
	}
	return (temp);
}
