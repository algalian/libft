/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:32:42 by algalian          #+#    #+#             */
/*   Updated: 2023/01/19 14:32:45 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i <= n)
	{
		((char*) s)[i] = 0;
		i++;
	}
}

/*int	main()
{
	char string [] = "111111111111";
	unsigned int slots = 11;
	ft_bzero(string, slots);
	printf("%s", string);
	return(0);
}*/
