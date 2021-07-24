/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:48:21 by dalves-s          #+#    #+#             */
/*   Updated: 2021/07/24 18:48:56 by dalves-s         ###   ########.fr       */
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
	printf("valor da minha:%i \n", i);
	j = printf("teste da d %i coisas depois \n", teste);
	printf("valor da std:%i \n\n", j);

	i = ft_printf("teste da %% coisas depois \n");
	printf("valor da minha:%i\n", i); 
	j = printf("teste da %% coisas depois \n");
	printf("valor da std:%i\n\n", j);
}
