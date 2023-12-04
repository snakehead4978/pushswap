/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:09:35 by jla-chon          #+#    #+#             */
/*   Updated: 2023/12/04 17:54:29 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_nlist
{
	int				*data;
	struct s_nlist	*next;
}				t_nlist;

typedef struct	s_olist
{
	char			*data;
	struct s_olist	*next;
}				t_olist;


#endif