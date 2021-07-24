/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:26:46 by dalves-s          #+#    #+#             */
/*   Updated: 2021/07/24 18:37:05 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa(unsigned long long int num, char *base)
{
	int		len_base;

	len_base = ft_strlen(base);
	if (num / len_base > 0)
		ft_print_hexa(num / len_base, base);
	ft_putchar_fd(base[num % len_base], 1);
}

void	ft_hex(unsigned int num, char *base, t_menbers *runner)
{
	int		len_base;

	len_base = ft_strlen(base);
	if (num / len_base > 0)
	{
		runner->length++;
		ft_hex(num / len_base, base, runner);
	}
	ft_putchar_fd(base[num % len_base], 1);
}
