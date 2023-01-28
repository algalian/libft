/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:34:51 by algalian          #+#    #+#             */
/*   Updated: 2023/01/19 14:34:52 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*char_s;

	*char_s = (char *) s;
	i = 0;
	while (char_s[i] != '\0' && i <= n)
	{
		if (char_s[i] == c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	char string[] =  "Mi jaca galopa y corta el viento cuando pasa por el puerto caminito de Jerez";
	int caracter = 97;
	unsigned int alcance = 120;
	printf("memchr:%s",memchr(string, caracter, alcance));
	printf("\n");
	printf("ft_memchr: %s", ft_memchr(string, caracter, alcance));
}*/
