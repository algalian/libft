/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:36:54 by algalian          #+#    #+#             */
/*   Updated: 2023/01/19 14:36:55 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	j = ft_strlen((char *)src);
	i = 0;
	while ((dst[i] != '\0' && src[i] != '\0') && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}

/*int main()
{
	char origen[] = "AAAAAAAAA";
	char destino[] = "BBBBBBB";
	unsigned int size = 4;
	printf("%lu", ft_strlcpy(destino, origen,size));
	printf("%lu", strlcpy(destino, origen, size));
	return(0);
}*/
