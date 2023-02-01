/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:02:35 by gubranco          #+#    #+#             */
/*   Updated: 2022/11/16 18:46:51 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*p;

	i = 0;
	len = ft_strlen(str);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == 0)
		return (0);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*  The strdup() function allocates sufficient	memory for a copy of the
string str, does the copy,	and returns a pointer to it.  The pointer may 
subsequently be used as an argument to the function free(3).
If	insufficient memory is available, NULL is returned */