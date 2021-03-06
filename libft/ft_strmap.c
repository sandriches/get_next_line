/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcorke <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 13:11:12 by rcorke        #+#    #+#                 */
/*   Updated: 2019/01/24 15:01:19 by rcorke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	size_t	x;
	char	*newstring;

	if (s)
	{
		newstring = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (newstring == NULL)
			return (NULL);
		x = 0;
		while (s[x] != '\0')
		{
			newstring[x] = f(s[x]);
			x++;
		}
		newstring[x] = '\0';
		return (newstring);
	}
	return (0);
}
