/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nlstlib.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:00:36 by jla-chon          #+#    #+#             */
/*   Updated: 2023/12/07 18:40:09 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_nlstadd_back(t_nlist **lst, t_nlist *new)
{
	if (!*lst)
	{
		*lst = new;
		new->next = 0;
		new->previous = 0;
	}
	else
	{
		if ((*lst)->previous)
		{
			(*lst)->previous->next = new;
			new->previous = (*lst)->previous;
		}
		else
		{
			(*lst)->next = new;
			new->previous = *lst;
		}
		new->next = *lst;
		(*lst)->previous = new;
	}
}

t_nlist	*ft_nlstnew(int content)
{
	t_nlist	*new;

	new = malloc(sizeof(t_nlist));
	if (!new)
		return (0);
	new->content = content;
	new->previous = 0;
	new->next = 0;
	return (new);
}

static void	ft_cl(t_nlist *lst)
{
	if (lst->next != 0)
		ft_cl(lst->next);
	free(lst);
}

void	ft_nlstclear(t_nlist **lst)
{
	if (!*lst)
		return ;
	if ((*lst)->previous)
		(*lst)->previous->next = 0;
	ft_cl(*lst);
	*lst = 0;
}

void	ft_push(t_nlist **lsta, t_nlist *lstb)
{
	t_nlist	*tmp;

	tmp = *lsta;
	(*lsta)->previous->next = (*lsta)->next;
	(*lsta)->next->previous = (*lsta)->previous;
	*lsta = (*lsta)->next;
	ft_nlstadd_back(&lstb, tmp);
}

int	ft_psfree(void *a, void *b, t_nlist *lst)
{
	free(a);
	a = 0;
	free(b);
	b = 0;
	ft_nlstclear(lst);
	return (0);
}
