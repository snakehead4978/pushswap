/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:35:26 by jla-chon          #+#    #+#             */
/*   Updated: 2023/12/11 21:14:48 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int ac, char **av)
{
	t_list	*numlist;
	t_list	*ordlist;

	numlist = 0;
	ordlist = 0;
	if (!ft_checkandstock(&numlist, ac, (char *)av))
		return (0);
	
}
