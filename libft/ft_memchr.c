/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:31:25 by gubranco          #+#    #+#             */
/*   Updated: 2022/11/14 19:44:32 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
	{
		if (str[i] == (unsigned char)c)
			return ((unsigned char *)b + i);
		i++;
	}
	return (0);
}

/* The memchr() function locates the first occurrence of c (converted to an
unsigned char) in string b. It returns a pointer to the byte located, 
or NULL if no such byte exists within len bytes.*/