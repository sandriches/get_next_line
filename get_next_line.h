/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcorke <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/29 16:50:46 by rcorke        #+#    #+#                 */
/*   Updated: 2019/02/07 21:45:13 by rcorke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 10

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# include "libft/libft.h"

int		get_next_line(const int fd, char **line);
int		ft_strcharloc(char *str);
#endif
