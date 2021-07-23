/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:37:47 by dalves-s          #+#    #+#             */
/*   Updated: 2021/05/31 22:37:47 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	c_1;

	str = s;
	i = 0;
	c_1 = (char)c;
	while (i < n)
	{
		str[i] = c_1;
		i++;
	}
	return ((void *)str);
}
