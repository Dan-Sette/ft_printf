/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:03:39 by dalves-s          #+#    #+#             */
/*   Updated: 2021/06/01 17:02:10 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	count = 0;
	if (dst_len >= size)
		return (size + src_len);
	while (src[count] != '\0' && i < size - 1)
	{
		dst[i] = src[count];
		count++;
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
