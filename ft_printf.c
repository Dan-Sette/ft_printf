/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:09:18 by dalves-s          #+#    #+#             */
/*   Updated: 2021/07/24 23:02:38 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conversion(va_list args, t_menbers *runner)
{
	if (runner->character == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (runner->character == 's')
		runner->length += ft_putstr_printf(va_arg(args, char *), 1);
	else if (runner->character == 'p')
	{
		ft_putstr_fd("0x", 1);
		hexa(va_arg(args, unsigned long long int), "0123456789abcdef", runner);
		runner->length += 2;
	}
	else if (runner->character == 'd' || runner->character == 'i')
	{
		runner->str = ft_itoa(va_arg(args, int));
		runner->length += ft_putstr_printf(runner->str, 1);
		free(runner->str);
	}
	else if (runner->character == 'u')
		ft_hex(va_arg(args, unsigned int), "0123456789", runner);
	else if (runner->character == 'x')
		ft_hex(va_arg(args, unsigned int), "0123456789abcdef", runner);
	else if (runner->character == 'X')
		ft_hex(va_arg(args, unsigned int), "0123456789ABCDEF", runner);
	else if (runner->character == '%')
		ft_putchar_fd('%', 1);
}

void	ft_recursive(char *str, t_menbers *runner, va_list args)
{
	char	*s;
	int		i;

	i = ft_strlen(str);
	s = (char *)str;
	while (*s != '%' && *s)
	{
		ft_putchar_fd((char)*s, 1);
		s++;
		runner->length++;
	}
	if (*s == '%')
	{
		runner->length++;
		s++;
		runner->character = *s;
		ft_conversion(args, runner);
		s++;
		if (*s != '\0')
			ft_recursive(s, runner, args);
	}
}

int	ft_printf(const char *str, ...)
{
	t_menbers	runner;
	va_list		args;

	runner.length = 0;
	va_start(args, str);
	ft_recursive((char *)str, &runner, args);
	va_end(args);
	return (runner.length);
}
