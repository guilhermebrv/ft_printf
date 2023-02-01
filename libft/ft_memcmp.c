/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:45:41 by gubranco          #+#    #+#             */
/*   Updated: 2022/11/14 20:09:35 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*strb1;
	unsigned char	*strb2;
	size_t			i;

	strb1 = (unsigned char *)b1;
	strb2 = (unsigned char *)b2;
	i = 0;
	while (i < len)
	{
		if (strb1[i] != strb2[i])
			return ((unsigned char)strb1[i] - (unsigned char)strb2[i]);
		i++;
	}
	return (0);
}

/*  The memcmp() function compares byte string b1 against byte string b2, and 
both strings are assumed to be len bytes long. It returns zero if the two 
strings are identical, otherwise returns the difference between the first two 
differing bytes(treated as unsigned char values, so that `\200' is greater 
than `\0',for example).  Zero-length strings are always identical. */