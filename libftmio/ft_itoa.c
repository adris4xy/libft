/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:47:11 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 13:57:20 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	nbr;
	size_t	len;
	char	*str;

	nbr = n;
	len = (nbr > 0) ? 0 : 1; //Si el numero es menor que cero hacemos que len sea 1 por el caracter '-'.
	nbr = (nbr > 0) ? nbr : -nbr;
	while (n)
		n = len++ ? n / 10 : n / 10; //Es un ternario que obliga a hacer n/10 para ahorrar lineas sin el 'if'.
	str = (char *)malloc(sizeof(str) * len + 1);
	if (!str)
		return (NULL);
	*(str + len--) = '\0';
	while (nbr > 0)
	{
		*(str + len--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (len == 0 && str[1] == '\0')
		*(str + len) = '0';
	if (len == 0 && str[1] != '\0')
		*(str + len) = '-';
	return (str);
}
//Reserva memoria con malloc para la cadena de caracteres que va a devolver,
//que representa el integer pasado como argumento. Se deben gestionar los números negativos.

//int n   -> El INT que hay que convertir.

//Retorno -> La cadena de caracteres que representa al integer. NULL si falla la reserva de memoria.