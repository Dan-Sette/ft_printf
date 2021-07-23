/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:09:18 by dalves-s          #+#    #+#             */
/*   Updated: 2021/07/22 22:24:07 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int i;
	int j;
	char string[] = "Será que o s vai funcionar?";
	int teste = 112417;

	i = ft_printf("Eu sou legal\n");
	printf("valor da minha:%d\n", i);
	j = printf("Eu sou legal\n");
	printf("valor da std:%d\n\n", j);

	i = ft_printf("teste char : %c\n", 'b');
	printf("valor da minha:%d\n", i);
	j = printf("teste char : %c\n", 'b');
	printf("valor da std:%d\n\n", j);
	
	i = ft_printf("teste char : %c coisas depois\n", 'b');
	printf("valor da minha:%d\n", i);
	j = printf("teste char : %c coisas depois\n", 'b');
	printf("valor da std:%d\n\n", j);

	i = ft_printf("teste char : %s coisas depois\n", string);
	printf("valor da minha:%d\n", i);
	j = printf("teste char : %s coisas depois\n", string);
	printf("valor da std:%d\n\n", j);

	i = ft_printf("essa é hex %p coisas depois\n", &teste);
	printf("valor da minha:%d\n", i);
	j = printf("essa é hex %p coisas depois\n", &teste);
	printf("valor da std:%d\n\n", j);

	i = ft_printf("teste da x %x coisas depois \n", teste);
	printf("valor da minha:%d\n", i);
	j = printf("teste da x %x coisas depois \n", teste);
	printf("valor da std:%d\n\n", j);

	i = ft_printf("teste da x %X coisas depois \n", teste);
	printf("valor da minha:%d\n", teste);
	j = printf("teste da x %X coisas depois \n", teste);
	printf("valor da std:%d\n\n", j);

	i = ft_printf("teste da d %i coisas depois \n", teste);
	printf("valor da minha:%i\n", i);
	j = printf("teste da d %i coisas depois \n", teste);
	printf("valor da std:%i\n\n", j);

	i = ft_printf("teste da %% coisas depois \n");
	printf("valor da minha:%i\n", i);
	j = printf("teste da %% coisas depois \n");
	printf("valor da std:%i\n\n", j);
}

void	ft_conversion(va_list args, t_menbers *runner)
{
	if (runner->character == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (runner->character == 's')
		runner->length += ft_putstr_printf(va_arg(args, char *), 1);
	else if (runner->character == 'p')
	{
		ft_putstr_fd("0x", 1);
		ft_print_hexa(va_arg(args, unsigned long long int), "0123456789abcdef");	
		runner->length += 13;
	}
	else if (runner->character == 'd' || runner->character == 'i')
	{
		runner->str = ft_itoa(va_arg(args, int));
		runner->length += ft_putstr_printf(runner->str, 1);
	}
	else if (runner->character == 'u')
		ft_hex(va_arg(args, unsigned int), "0123456789", runner);
	else if (runner->character == 'x')
		ft_hex(va_arg(args, unsigned int), "0123456789abcdef", runner);
	else if (runner->character == 'X')
		ft_hex(va_arg(args, unsigned int), "0123456789ABCDEF", runner);
	else if (runner->character == '%')
		ft_putchar_fd( '%', 1);
 }

void	ft_recursive(char *str, t_menbers *runner, va_list args)
{
	char *s;
	int i;

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

int		ft_printf(const char *str, ...)
{
	t_menbers runner;
	va_list args;

	runner.length = 0;
	va_start(args, str);
	ft_recursive((char *)str, &runner, args);
	va_end(args);
	return (runner.length);
}
