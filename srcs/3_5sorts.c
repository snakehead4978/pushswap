/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_5sorts.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:07:36 by jla-chon          #+#    #+#             */
/*   Updated: 2023/12/07 17:24:36 by jla-chon         ###   ########.fr       */
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

void	sort3(t_list *node)
{
	int	a;

	a = ft_findcase(node);
	if (a == 1)
	{
		ft_rra(node);
		ft_sa(node);
	}
	else if (a == 2)
		ft_ra(node);
	else if (a == 3)
	{
		ft_sa(node);
		ft_rra(node);
	}
	else if (a == 4)
		ft_sa(node);
	else
		ft_rra(node);
}
