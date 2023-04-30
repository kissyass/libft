/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykissiko <ykissiko@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:58:48 by ykissiko          #+#    #+#             */
/*   Updated: 2022/10/14 13:06:19 by ykissiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		ft_lstdelone(*lst, del);
		*lst = (*lst)->next;
	}
}
