/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:11:54 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/06 12:10:37 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	int		len;

	i = 0;
	if (size < ft_strlen(dst))
		return (size + ft_strlen(src));
	else
	{
		while (dst[i])
			i++;
		ft_strlcpy(&dst[i], src, size - i);
		len = ft_strlen(src) + i;
		return (len);
	}
}

/* The function concatenates the string pointed by source (including the null 
character), to the destination. 

The function takes the full size
of the destination buffer and guarantee NUL-termination if there is room. 

Note that room for the NULL should be included in size.

It will append at most size - strlen(dst) - 1 characters.  

It will then NUL-terminate, unless size is 0 or the original dst string 
was longer than size. 

It returns the total length of the string it tried 
to create, which means the initial length of dst plus the length of src */