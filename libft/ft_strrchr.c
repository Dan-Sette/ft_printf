/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:32:41 by dalves-s          #+#    #+#             */
/*   Updated: 2021/06/09 15:13:32 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		a;

	a = ft_strlen(s);
	if (c == 0)
		return (ft_strchr(s, '\0'));
	while (a)
	{
		a--;
		if (s[a] == (unsigned char)c)
			return ((char *)s + a);
	}
	return (0);
}
