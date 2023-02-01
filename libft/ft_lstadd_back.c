/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:11:39 by gubranco          #+#    #+#             */
/*   Updated: 2022/11/30 12:36:34 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (*lst != NULL)
	{
		head = ft_lstlast(*lst);
		head->next = new;
	}
	else
		*lst = new;
}

/* Adds the node ’new’ at the end of the list, returning nothing. */