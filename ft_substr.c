/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:09:43 by algalian          #+#    #+#             */
/*   Updated: 2023/01/24 15:09:47 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	substr = malloc(len);
	if (substr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	return (substr);
}

/*int main()
{
	char const string[] = "0123456789";
	unsigned int start = 4;
	unsigned int end = 4;
	printf("%s", ft_substr(string, start, end));
	return(0);
}*/