/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:42:33 by algalian          #+#    #+#             */
/*   Updated: 2023/01/24 19:42:37 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	ft_left(char const *s1, char const *set)
{
	unsigned int	i;

	i = 0;
	while (ft_strchr(set, s1[i]) != NULL)
	{
		i++;
	}
	return (i);
}

static int	ft_right(char const *s1, char const *set)
{
	unsigned int	i;

	i = ft_strlen(s1);
	i--;
	while (ft_strchr(set, s1[i]) != NULL)
	{
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	left;
	unsigned int	right;
	unsigned int	k;
	unsigned int	size;
	char			*trimmed;

	left = ft_left(s1, set);
	right = ft_right(s1, set);
	size = right - left;
	trimmed = malloc(size + 1);
	k = 0;
	while (k < size + 1)
	{
		trimmed[k] = s1[left];
		k++;
		left++;
	}
	trimmed[k] = '\0';
	return (trimmed);
}

/*int main()
{
	char string[] = "AAAAAAAAABAAAAAAAAAAAABBABCholaBA";
	char set []= "A";
	printf("%s", ft_strtrim(string, set));
	return(0);
}*/
