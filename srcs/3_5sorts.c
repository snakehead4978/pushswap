/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_5sorts.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:07:36 by jla-chon          #+#    #+#             */
/*   Updated: 2023/12/13 18:40:05 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ft_findcase(t_list *node)
{
	int	a;
	int	b;
	int	c;

	a = *(int *)node->content;
	b = *(int *)node->next->content;
	c = *(int *)node->next->next->content;
	if (a < b && b > c && a < c)
		return (1);
	else if (a < b)
		return (2);
	else if (b > c)
		return (3);
	else if (a < c)
		return (4);
	else
		return (5);
}

void	sort3(t_list **nlst, t_list **olst)
{
	int	a;
	int	check;

	check = 1;
	a = ft_findcase(*nlst);
	if (a == 1)
		check &= (ft_ordandop(nlst, 0, olst, rra) && ft_ordandop(nlst, 0, olst, sa));
	else if (a == 2)
		check &= ft_ordandop(nlst, 0, olst, ra);
	else if (a == 3)
		check &= (ft_ordandop(nlst, 0, olst, sa) && ft_ordandop(nlst, 0, olst, rra));
	else if (a == 4)
		check &= ft_ordandop(nlst, 0, olst, sa);
	else
		check &= ft_ordandop(nlst, 0, olst, rra);
	if (!check)
		return (0);
	return (1);
}

void	sort5(t_list **nlst, t_list **olst, int	size)
{
	t_list	*bstack;
	t_list	*new;

	bstack = 0;
	while (size-- > 3)
		ft_ordandop(nlst, bstack, olst, pa);
	sort3(nlst, olst);
}
