/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:20:20 by algalian          #+#    #+#             */
/*   Updated: 2023/01/30 12:20:23 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static unsigned int	ft_words(const char *s, char c)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			i++;
		}
		j++;
		while (s[i] == c)
		{
			i++;
		}
	}
	return (j);
}

static char	*cut(char const *s, char c)
{
	char	q[1];
	char	*p;

	q[0] = c;
	p = ft_strtrim(s, q);

	return (p);
}

static unsigned int	*ft_letters(const char *s, char c, int words)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	*letters;

	letters = malloc(sizeof (int) * words);
	if(!letters)
		return(NULL);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			j++;
		}
		while (s[i] == c)
		{
			i++;
		}
		letters[k] = j;
		k++;
	}
	return (letters);
}

static char	*ft_write(char *a, const char *s, unsigned int i, int start)
{
	unsigned int	j;
	unsigned int	k;

	a = malloc((sizeof (char) * i) + 1);
	if(!a)
		return(NULL);
	j = 0;
	k = start;
	while (j < i)
	{
		a[j] = s[k];
		j++;
		k++;
	}
	a[j] = '\0';
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char			*p;
	char			**array;
	unsigned int	*letters;
	unsigned int	start;
	unsigned int	i;

	p = cut(s, c);
	array = (char **) malloc((ft_words(p, c) * sizeof (char *)) + 1);
	if(!array)
		return(NULL);
	letters = ft_letters(p, c, ft_words(p, c));
	i = 0;
	start = 0;
	while (i < ft_words(p, c) && i < ft_strlen(p))
	{
		array[i] = ft_write(array[i], p, letters[i], start);
		start = start + letters[i];
		i++;
		while (p[start] == c)
		{
			start++;
		}
	}
	array[i] = NULL;
	return (array);
}

/*int	main()
{
	char const string[] = "This      was once    revealed       to     me in     a  dream";
	char separador = ' ';
	char **split;
	unsigned int i;

	split = ft_split(string, separador);
	i = 0;
	while(split[i] != '\0')
	{
		printf("String %i: %s", i, split[i]);
		printf("\n");
		i++;
	}
	return(0);

}*/

