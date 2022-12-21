/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:25:30 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/04 15:49:41 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*dst0;
	unsigned char	*src0;
	size_t			i;

	if (!dst && !src)
		return (0);
	src0 = (unsigned char *)src;
	dst0 = (unsigned char *)dst;
	i = 0;
	while (i < len)
	{
		dst0[i] = src0[i];
		i++;
	}
	return (dst);
}

/*  The memcpy() function copies len bytes from string src to string dst.  If
src and dst overlap, the results are not defined.
It returns the original	value of dst.*/