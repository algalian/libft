/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:36:30 by algalian          #+#    #+#             */
/*   Updated: 2023/01/19 14:36:32 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*s2;

	*s2 = malloc(ft_strlen(s1) * sizeof(const char));
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	free(s2);
	return (s2);
}

/*int main()
{   
	char string[] = "Cópiame ésta";
	printf("ft_strdup: %s",ft_strdup(string));
	printf("\n");
	printf("strdup:%s", strdup(string));
	return(0);
}*/
