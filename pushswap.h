/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jla-chon <jla-chon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:09:35 by jla-chon          #+#    #+#             */
/*   Updated: 2023/12/07 17:29:54 by jla-chon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef enum
{
	sa,
	sb,
	pa,
	pb,
	ra,
	rb,
	rra,
	rrb
}					t_i;

typedef struct s_nlist
{
	int				content;
	struct s_nlist	*previous;
	struct s_nlist	*next;
}					t_nlist;

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
int					ft_psfree(void *a, void *b, t_list *lst);
int					ft_checkandstock(t_list **numlst, int ac, char **av);
t_list				*ft_lstnew(void *content);

#endif