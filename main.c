/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcorke <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/31 19:27:21 by rcorke        #+#    #+#                 */
/*   Updated: 2019/02/22 14:19:02 by rcorke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
int main(int argc, char **argv)
{
    char **line;
    char *test;
    int fd;
    int fd2;

    test = ft_strnew(0);
    line = &test;
    (void)argc;
    fd = open(argv[1], O_RDONLY);
    fd2 = open(argv[2], O_RDONLY);
	while (get_next_line((const int)fd, line) > 0)
	{
	    printf("%s\n", *line);
		if(get_next_line((const int)fd2, line))
			printf("%s\n", *line);
	}
	return (0);
}
