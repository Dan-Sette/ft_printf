/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:37:28 by dalves-s          #+#    #+#             */
/*   Updated: 2021/05/31 22:37:28 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*des;
	const char	*s;

	if (!(dest) && !(src) && (n > 0))
		return (NULL);
	s = (char *)src;
	des = (char *)dest;
	i = 0;
	while (i < n)
	{
		des[i] = s[i];
		i++;
	}
	return ((void *)dest);
}
