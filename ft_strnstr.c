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
	unsigned int	j;
	unsigned int	k;

	if (len == 0 && (!needle || !haystack))
		return (0);
	if (!*needle)
		return ((char *)haystack);
	j = 0;
	while (haystack[j] != '\0' && j < len)
	{
		if (haystack[j] == needle[0])
		{
			k = 0;
			while ((haystack[j] == needle[k]) && ((j < len) && (needle[k] != '\0' && haystack[j] != '\0')))
			{
				j++;
				k++;
			}
			if (k == ft_strlen(needle))
				return ((char *) haystack + j - k);
		}
		j++;
	}
	return (NULL);
}

/*int main()
{
	char string[] = "MZIRIBMZIRIBMZE123";
	char substring[] = "123";
	size_t alcance = strlen(substring);
	printf("ft_strnstr:%s",ft_strnstr(string, substring, alcance));
	printf("\n");
	printf("strnstr:%s", strnstr(string, substring, alcance));
	return(0);
}*/
