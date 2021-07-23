/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-s <dalves-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 15:46:03 by dalves-s          #+#    #+#             */
/*   Updated: 2021/06/11 16:10:49 by dalves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux1;
	t_list	*aux2;

	aux1 = *lst;
	if (!aux1)
		return ;
	while (aux1 != NULL)
	{
		del(aux1->content);
		aux2 = aux1->next;
		free(aux1);
		aux1 = aux2;
	}
	*lst = NULL;
}
