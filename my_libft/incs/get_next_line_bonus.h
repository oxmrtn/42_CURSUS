/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:53:47 by mtrullar          #+#    #+#             */
/*   Updated: 2024/06/24 11:06:37 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct gn_list
{
	char			content;
	struct gn_list	*next;
}					gnl_list;

int		ft_line_in_lst(gnl_list **node, gnl_list **to_del);

void	ft_lst_add_back(gnl_list *new_node, gnl_list **current_node);

gnl_list	*ft_new_node(char buffer);

char	*ft_lst_to_buffer(gnl_list **node, gnl_list **to_del);

void	ft_del_lst(gnl_list **node, gnl_list **to_del);

char	*get_next_line(int fd);

void	buffer_to_lst(gnl_list **node, char *buffer);

void	ft_del_all(gnl_list **node);

gnl_list	*ft_lst_last(gnl_list *node);

#endif