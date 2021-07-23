/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 22:37:17 by dalves-s          #+#    #+#             */
/*   Updated: 2021/05/31 22:37:20 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_a;
	unsigned char	*s2_a;

	if (n == 0)
		return (0);
	s1_a = (unsigned char *)s1;
	s2_a = (unsigned char *)s2;
	while ((*s1_a == *s2_a) && (n - 1 > 0))
	{
		s1_a++;
		s2_a++;
		n--;
	}
	return (*s1_a - *s2_a);
}
