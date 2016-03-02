/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 17:45:14 by vroussea          #+#    #+#             */
/*   Updated: 2016/03/02 17:08:51 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <unistd.h>
# include "libft.h"
# define BUFF_SIZE 32

typedef struct		s_file
{
	int				fd;
	char			*str;
	struct s_file	*next;
	struct s_file	*prev;
}					t_file;

int					get_next_line(int const fd, char **line);
#endif
