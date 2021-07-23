/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:31:10 by dalves-s          #+#    #+#             */
/*   Updated: 2021/07/22 21:50:53 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct s_menbers
{
	int length;
	char character;
	char *str;
	
} t_menbers;

int		ft_putstr_printf(char *s, int fd);
int		ft_printf(const char *str, ...);
void	ft_print_char(va_list args, t_menbers *runner);
void	ft_recursive(char *s, t_menbers *runner, va_list args);
void	ft_print_hexa(unsigned long long int num, char *base);
void	ft_hex(unsigned int num, char *base, t_menbers *runner);

#endif