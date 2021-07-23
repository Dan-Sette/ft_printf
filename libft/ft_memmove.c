/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:37:37 by dalves-s          #+#    #+#             */
/*   Updated: 2021/06/04 21:18:50 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*des;
	char	*s;
	size_t	i;

	des = (char *)dest;
	s = (char *)src;
	i = 0;
	if (dest > src)
	{
		while (n > i++)
		{
			des[n - i] = s[n - i];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
