/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instparser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:35:30 by jla-chon          #+#    #+#             */
/*   Updated: 2023/12/11 21:14:47 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ft_ordcmp(t_list **inst, char *ord)
{
	char	*ords[12];
	t_i		i;

	ords[sa] = "sa\n";
	ords[sb] = "sb\n";
	ords[ss] = "ss\n";
	ords[pa] = "pa\n";
	ords[pb] = "pb\n";
	ords[ra] = "ra\n";
	ords[rb] = "rb\n";
	ords[rr] = "rr\n";
	ords[rra] = "rra\n";
	ords[rrb] = "rrb\n";
	ords[rrr] = "rrr\n";
	ords[11] = 0;
	i = 0;
	while (ords[i])
	{
		if (!ft_strcmp(ord, ords[i]))
		{
			if (!ft_addorder(inst, i))
				return (0);
			return (1);
		}
		i++;
	}
	return (0);
}

static int	ft_strcmp(char *s1, char *s2)
{
	size_t			i;

	i = 0;
	while (s1[i] == s2[i] && s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_instlist(t_list **inst)
{
	ssize_t	check;
	char	buf[1];
	char	res[5];
	int		i;

	res[4] = 0;
	check = 1;
	*buf = 0;
	i = 0;
	while (check)
	{
		if (i == 4)
			return (ft_psfree(0, 0, *inst));
		check = read(0, buf, 1);
		res[i] = *buf;
		if (res[i] == '\n')
		{
			if (!ft_ordcmp(inst, res))
				return (0);
			i = 0;
		}
		else
			i++;
	}
}
