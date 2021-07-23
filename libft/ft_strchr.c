/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:15:01 by dalves-s          #+#    #+#             */
/*   Updated: 2021/06/09 12:33:19 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c_cast;

	c_cast = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == c_cast)
			return ((char *)s);
		s++;
	}
	if (c_cast == '\0')
		return ((char *)s);
	return (NULL);
}
