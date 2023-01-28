/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:33:13 by algalian          #+#    #+#             */
/*   Updated: 2023/01/19 14:33:16 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, count);
	return (ptr);
}
/*int main()
{
	unsigned int objetos = 10;
	unsigned int tamaño = sizeof(int);
	printf("calloc:%s", calloc(objetos, tamaño));
	printf("\n");
	printf("ft_calloc:%s", ft_calloc(objetos,tamaño));
	free(calloc(objetos,tamaño));
	return(0);
}*/
