/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:24:31 by gubranco          #+#    #+#             */
/*   Updated: 2022/11/14 12:01:37 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)dest;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (dest);
}

/* The memset() function writes len bytes of value c (converted to an
unsigned char) to the string dest. Undefined behaviour from memset(),
resulting from storage overflow, will occur if len is greater than the
the length of buffer dest. The behaviour is also undefined if dest is an
invalid pointer. It returns its first argument. */