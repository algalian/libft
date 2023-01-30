/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:37:26 by algalian          #+#    #+#             */
/*   Updated: 2023/01/19 14:37:29 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = ft_strlen(needle);
	if (i == 0)
		return ((char *) haystack);
	j = 0;
	while (haystack[j] != '\0' && j < len)
	{
		if (haystack[j] == needle[0])
		{
			k = 0;
			while (haystack[j] == needle[k])
			{
				j++;
				k++;
			}
			if (k == i)
				return ((char *) haystack + j - k);
		}
		j++;
	}
	return (NULL);
}

/*int main()
{
	char string[] = "Yo en ningún momento le he interrumpido a usted";
	char substring[] = "le";
	unsigned int alcance = 45;
	printf("%s",ft_strnstr(string, substring, alcance));
	return(0);
}*/
