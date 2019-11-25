/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 10:54:45 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 13:29:02 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
//Realiza una iteración sobre la lista lst y aplica la función f al contenido de cada elemento.
//*lst 				-> La dirección del puntero a un elemento.
//void (*f)(void *) -> La dirección de la función que hay que aplicar.