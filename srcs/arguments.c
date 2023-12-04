/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:38:05 by jla-chon          #+#    #+#             */
/*   Updated: 2023/12/04 19:33:26 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	arguments(t_nlist **numlst, char **av)
{
	int		*num;
	int		i;
	t_nlist	*new;

	i = 0;
	while (av[i])
	{
		num = 0;
		if (ft_psatoi(num, av[i]))
			return (ft_psfree(num, *numlst));
		new = ft_lstnew(num);
		if (!new)
			return (ft_psfree(num, *numlst));
		ft_addback(numlst, new);
		i++;
	}
	return (1);
}
