/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 11:14:22 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 13:46:56 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*begin;

	if (lst)
	{
		tmp = lst;
		if (!(begin = ft_lstnew(f(tmp->content))))
			return (NULL);
		tmp = tmp->next;
		while (tmp)
		{
			if (!(new = ft_lstnew(f(tmp->content))))
			{
				ft_lstclear(&begin, del);
				return (NULL);
			}
			ft_lstadd_back(&begin, new);
			tmp = tmp->next;
		}
		return (begin);
	}
	return (NULL);
}
//Realiza una iteración sobre la lista lst y aplica la función f al contenido de cada elemento.
//Crea una nueva lista que resulta de las aplicaciones sucesivas de f.
//Disponemos de la función del si hay que eliminar el contenido de algún elemento.

//*lst 				  -> La dirección del puntero a un elemento.
//void *(*f)(void *)  -> La dirección de la función que hay que aplicar.
//void (*del)(void *) -> La dirección de la función que permite suprimir el contenido de un elemento.

//Returno -> La nueva lista. NULL si falla la asignación de memoria.