/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:58:57 by algalian          #+#    #+#             */
/*   Updated: 2023/02/06 15:59:04 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static unsigned int	ft_words(char const *s, char c)
{
	unsigned int	i;
	unsigned int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (s[i] == '\0')
				return (words);
		}
		i++;
	}
	return (words);
}

void	**ft_freeall(char **array)
{
	unsigned int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = ft_words(s, c);
	split = (char **) malloc((sizeof(char *) * (i + 1)));
	if (!split)
		ft_freeall(split);
	split[i] = NULL;
	i = 0;
	k = 0;
	while (s[i] != '\0' && k < ft_words(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		split[k] = ft_substr(s, j, i - j);
		if (!split[k])
			ft_freeall(split);
		k++;
	}
	return (split);
}

/*int main()
{
	char const string[] = "";
	char separador = ' ';
	char **split;
	unsigned int i;
	split = ft_split(string, separador);
	i = 0;
	while(i < ft_words(string,separador))
	{
		printf("String %i: %s", i, split[i]);
		printf("\n");
		i++;
	}
	//system("leaks -q a.out");//
	return(0);
}*/