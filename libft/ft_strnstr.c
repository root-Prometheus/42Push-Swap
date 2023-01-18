/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 05:37:35 by egunday           #+#    #+#             */
/*   Updated: 2023/01/07 05:37:37 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size;
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	size = ft_strlen(needle);
	i = 0;
	while (haystack[i] != '\0' && len >= size)
	{
		if (*(haystack + i) == *needle)
			if (ft_memcmp(haystack + i, needle, size) == 0)
				return ((char *)haystack + i);
		i++;
		len--;
	}
	return (0);
}
