/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:37:02 by dalves-s          #+#    #+#             */
/*   Updated: 2021/06/09 12:07:07 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s_cast;
	unsigned char	c_cast;

	s_cast = (unsigned char *)str;
	c_cast = (unsigned char)c;
	while (n > 0)
	{
		if (*s_cast == c_cast)
			return ((void *)s_cast);
		n--;
		s_cast++;
	}
	return (NULL);
}
