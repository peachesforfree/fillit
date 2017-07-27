/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 15:37:37 by mkim              #+#    #+#             */
/*   Updated: 2017/01/12 21:00:51 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *current;
	t_list *newlist;
	t_list *temp;

	current = lst;
	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	if ((current = ft_lstnew(temp->content, temp->content_size)))
	{
		newlist = current;
		lst = lst->next;
		while (lst)
		{
			temp = f(lst);
			if (!(newlist->next = ft_lstnew(temp->content, temp->content_size)))
				return (NULL);
			newlist = newlist->next;
			lst = lst->next;
		}
	}
	return (current);
}
