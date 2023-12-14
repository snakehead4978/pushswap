/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orders.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:39:20 by snek              #+#    #+#             */
/*   Updated: 2023/12/14 01:06:44 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_addorder(t_list **node, t_i i)
{
	t_list	*new;

	new = ft_lstnew(i);
	if (!new)
		return (0);
	ft_lstadd_back(node, new);
	return (1);
}

int	ft_ordandop(t_list **alist, t_list **blist, t_list **olist, t_i i)
{
	if (!ft_addorder(olist, i))
		return (0);
	ft_operate(alist, blist, i);
	return (1);
}
