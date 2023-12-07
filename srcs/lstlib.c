/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlibs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:00:36 by jla-chon          #+#    #+#             */
/*   Updated: 2023/12/07 17:30:23 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (!*lst)
		*lst = new;
	else
	{
		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = new;
	}
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = 0;
	return (new);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

static void	ft_cl(t_list *lst, void (*del)(void *))
{
	if (lst->next != 0)
		ft_cl(lst->next, del);
	del(lst->content);
	free(lst);
}

static void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (!*lst || !del)
		return ;
	ft_cl(*lst, del);
	*lst = 0;
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

int	ft_psfree(void *a, void *b, t_list *lst)
{
	free(a);
	a = 0;
	free(b);
	b = 0;
	ft_lstclear(lst, free);
	return (0);
}
