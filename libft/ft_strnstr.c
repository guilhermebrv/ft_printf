/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:01:41 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/04 15:57:02 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	a;
	size_t	len;

	i = 0;
	a = 0;
	len = ft_strlen(s2);
	if (len == 0)
		return ((char *)s1);
	while (i < n && s1[i])
	{
		a = 0;
		while (s1[i + a] == s2[a] && ((i + a) < n) && s2[a] && s1[i + a])
			a++;
		if (a == len)
			return ((char *)&s1[i]);
		i++;
	}
	return (0);
}

/* The function locates the first occurrence of the null-terminated string 
src in the string dst, where not more than len characters are searched. 
Characters that appear after a `\0' character are not searched.  If src 
is an empty string, dst is returned; if src occurs nowhere in dst, NULL is
returned; otherwise a pointer to the first character of the first 
occurrence of src is returned. */