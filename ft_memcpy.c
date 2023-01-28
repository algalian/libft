/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:35:20 by algalian          #+#    #+#             */
/*   Updated: 2023/01/19 14:35:22 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	ft_restrict(void *dst, const void *src)
{
	int		i;
	int		j;
	char	*char_dest;
	char	*char_source;

	*char_dest = (char *) dst;
	*char_source = (char *) src;
	i = 0;
	while (char_dest[i] != '\0' && char_source [i] != '\0')
	{
		j = 0;
		while (char_source[j] != '\0')
		{
			if (&char_source[j] == &char_dest[i])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*char_dest;
	char			*char_source;

	*char_dest = (char *) dst;
	*char_source = (char *) src;
	if (ft_restrict(dst, src) == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		char_dest[i] = char_source[i];
		i++;
	}
	return (char_dest);
}

/*int main()
{
	char destino [] = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
	char origen [] = "abcdefg";
	unsigned int slots = 3;
	ft_memcpy(destino, origen, slots);
	printf("%s", origen);
	printf("%s", destino);
	return(0);
}*/
