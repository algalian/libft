/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:35:46 by algalian          #+#    #+#             */
/*   Updated: 2023/01/19 14:35:49 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*char_dest;
	char			*char_source;

	*char_dest = (char *) dst;
	*char_source = (char *) src;
	i = 0;
	while (i < n)
	{
		char_dest[i] = char_source[i];
		i++;
	}
}

/*int main()
{
	char origen[] = "123456789";
	unsigned int slots = 4;
	ft_memmove(origen + 2, origen, slots);
	printf("%s", origen +2);
	return(0);
}*/
