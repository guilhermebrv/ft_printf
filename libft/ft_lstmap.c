/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:30:43 by gubranco          #+#    #+#             */
/*   Updated: 2022/12/02 13:42:50 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*newlst;

	if (lst == NULL)
		return (NULL);
	head = NULL;
	while (lst != NULL)
	{
		newlst = ft_lstnew(f(lst->content));
		if (newlst == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, newlst);
		lst = lst->next;
	}
	return (head);
}

/* Iterates the list ’lst’ and applies the function ’f’ on the content of 
each node.  Creates a new list resulting of the successive applications of
the function ’f’.  The ’del’ function is used to delete the content of a node
if needed. It returns the new list or NULL if the allocation fails. */