/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snek <snek@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:09:35 by jla-chon          #+#    #+#             */
/*   Updated: 2023/12/12 18:55:45 by snek             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef enum s_i
{
	sa,
	sb,
	ss,
	pa,
	pb,
	ra,
	rb,
	rr,
	rra,
	rrb,
	rrr
}	t_i;

typedef struct s_list
{
	int				content;
	struct s_list	*previous;
	struct s_list	*next;
}					t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
void	ft_lstclear(t_list **lst);
int					ft_psfree(void *a, void *b, t_list **lst);
int					ft_checkandstock(t_list **numlst, int ac, char **av);
int	ft_addorder(t_list **node, t_i i);
void	ft_operate(t_list **a, t_list **b, t_i	c);
int	ft_ordandop(t_list **alist, t_list **blist, t_list **olist, t_i i);
#endif