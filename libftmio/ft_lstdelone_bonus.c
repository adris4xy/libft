/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:48:52 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 12:51:48 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
	lst = NULL;
}
//Libera la memoria del elemento pasado como argumento utilizando la función del y después free.
//No se debe liberar la memoria de "next". A continuación, el puntero al elemento debe pasar a NULL.
//*lst 				  -> El elemento cuya memoria se debe liberar
//void (*del)(void *) -> La dirección de una función utilizada para borrar el contenido del elemento.