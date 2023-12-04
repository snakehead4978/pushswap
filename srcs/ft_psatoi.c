/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_psatoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:36:46 by jla-chon          #+#    #+#             */
/*   Updated: 2023/12/04 18:54:02 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_psatoi(int *num, const char *nptr)
{
	int			i;
	long		sign;
	long		res;

	sign = 1;
	i = 0;
	res = 0;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		res = res * 10 + nptr[i++] - '0';
	res = res * sign;
	if (res < -2147483648 || res > 214748367)
		return (0);
	free(num);
	num = malloc(sizeof(int) * 1);
	if (num)
		return (0);
	*num = (int)res;
	return (1);
}
