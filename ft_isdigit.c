/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:34:26 by algalian          #+#    #+#             */
/*   Updated: 2023/01/19 14:34:28 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_isdigit(unsigned char n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	return (0);
}

/*int main()
{
	unsigned char numero = 'h';
	printf("%i",ft_isdigit(numero));
	return(0);
}*/
