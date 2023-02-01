/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:11:45 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/05 12:53:29 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/* The function copies the string pointed by source (including the null 
character), to the destination. The function takes the full size
of the destination buffer and guarantee NUL-termination if there is room.  
Note that room for the NUL should be included in dstsize.
It copies up to dstsize - 1 characters from the string src to dst,
NUL-terminating the result if dstsize is not 0. It returns the total length 
of the string it tried to create, which means the length of src. */