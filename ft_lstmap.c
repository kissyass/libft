/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykissiko <ykissiko@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:26:04 by ykissiko          #+#    #+#             */
/*   Updated: 2022/10/15 16:27:51 by ykissiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*el;

	if (!lst || !f || !del)
		return (NULL);
	new = 0;
	while (lst)
	{
		el = ft_lstnew(f(lst->content));
		if (!(el))
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, el);
		lst = lst->next;
	}
	return (new);
}
