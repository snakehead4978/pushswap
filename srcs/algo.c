/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:21:41 by marvin            #+#    #+#             */
/*   Updated: 2023/12/15 15:21:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_returnnum(int num, int size)
{
	if (num < size / 2)
		return (num);
	else
		return (num - (num - size / 2));
}

int		ft_checkpos(int num, t_list *blist)
{
	int	a;
	int	max;

	a = 0;
	max = ft_findmax(blist);
	if (num > max)
	{
		while (blist->content != max)
		{
			a++;
			blist = blist->next;
		}
		return (a);
	}
	max = 1;
	while (max)
	{
		if (blist->content < num && blist->previous > num)
			max = 0;
		else
			a++;
		blist = blist->next;
	}
	return (a);
}

void	ft_setnum(int *num, t_list *alist, t_list *blist, int index)
{
	int	size;

	size = ft_lstsize(blist);
	
}

int ft_tmp(t_list **alist, t_list **olist, int size)
{
	t_list	*blist;
	int		num[2];
	int		index;

	tmp = *alist;
	num[0] = 1;
	num[1] = 0;
	blist = 0;
	index = 0;
	while (*alist)
	{
		while (index < size && ft_returnnum(index, size) < *num)
		{
			ft_setnum(num, alist, blist, index);
			index++;
		}
		if (!ft_runnum(num[1], alist, blist, olist))
			return (0);
	}
	return (1);
}
