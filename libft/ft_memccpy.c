/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:36:09 by dalves-s          #+#    #+#             */
/*   Updated: 2021/05/31 22:36:09 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*des;
	const char	*s;
	size_t		count;

	count = 0;
	s = (char *)src;
	des = (char *)dest;
	while (count < n)
	{
		des[count] = s[count];
		if ((unsigned char)s[count] == (unsigned char)c)
			return ((char *)dest + (count + 1));
		count++;
	}
	return (NULL);
}
