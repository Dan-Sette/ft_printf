/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:30:57 by dalves-s          #+#    #+#             */
/*   Updated: 2021/07/24 23:07:07 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_printf(char *s, int fd)
{
	size_t	i;
	char	*n;

	n = "(null)";
	i = 0;
	if (s == NULL)
	{
		while (n[i])
		{
			ft_putchar_fd(n[i], fd);
			i++;
		}
		return (i - 1);
	}
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return (i - 1);
}
