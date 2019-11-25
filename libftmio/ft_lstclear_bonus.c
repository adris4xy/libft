/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 18:00:24 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 12:39:50 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = tmp;
		}
	}
}
//Suprime y libera la memoria del elemento pasado como parámetro y de todos los elementos siguientes,
//con del y free. Por último, el puntero inicial debe pasar a NULL.
//**lst 			 -> La dirección del puntero a un elemento.
//void(*del)(void *) -> La dirección de la función que permite suprimir el contenido de un elemento