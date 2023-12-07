/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instparser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:35:30 by jla-chon          #+#    #+#             */
/*   Updated: 2023/12/07 17:25:59 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ft_strcmp(char *s1, char *s2)
{
	size_t			i;

	i = 0;
	while (s1[i] == s2[i] && s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

static int	ft_addtolist(t_list **inst, t_i num)
{
	ft_
}

static int	ft_instcheck(t_list **inst, char *ord)
{
	if (!ft_strcmp(ord, "sa\n"))

	else if ()
	
}

int	ft_instlist(t_list **inst)
{
	ssize_t	check;
	char	*buf;
	char	*res;
	int		i;

	buf = ft_malloc(sizeof(char) * 1);
	res = ft_malloc(sizeof(char) * 5);
	res[4] = 0;
	check = 1;
	i = 0;
	while (check)
	{
		if (i == 4)
			return (ft_psfree(buf, res, *inst));
		check = read(0, buf, 1);
		res[i] = *buf;
		if (res[i] == '\n')
		{
			if (res)
			i = 0;
		}
		else
			i++;
	}
}
