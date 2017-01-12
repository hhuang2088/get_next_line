/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehuang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 22:09:16 by hehuang           #+#    #+#             */
/*   Updated: 2017/01/06 20:51:52 by hehuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "libft/libft.h"
# define BUFF_SIZE 32

typedef struct			s_fdhandle
{
	struct s_fdhandle	*head;
	int					fd;
	char				*body;
	struct s_fdhandle	*next;
}						t_fdhandle;

int						get_next_line(const int fd, char **line);

#endif
