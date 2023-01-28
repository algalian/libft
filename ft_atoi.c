/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:28:25 by algalian          #+#    #+#             */
/*   Updated: 2023/01/19 13:28:29 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	clean_string(const char *str, unsigned int i)
{
	if (ft_isdigit(str[i]) == 1)
		return (i);
	if (str[i] != ' ' && (str[i] != '+' && str[i] != '-'))
	{
		if (ft_isdigit(str[i]) != 1)
			return (-1);
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (ft_isdigit(str[i + 1]) != 1)
			return (-1);
		return (i + 1);
	}
	if (str[i] == ' ')
	{
		while (str[i] == ' ')
			i++;
		return (clean_string(str, i));
	}
	return (-1);
}

static int	sign(const char *str, unsigned int i)
{
	if (i == 0)
		return (1);
	if (str[i - 1] == '-')
	{
		return (-1);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	next;

	if (clean_string (str, 0) == -1)
		return (0);
	i = clean_string(str, 0);
	num = str[i] - '0';
	i++;
	while (ft_isdigit(str[i]) == 1)
	{
		next = str[i] - '0';
		num = num * 10 + next;
		i++;
	}
	return (num * sign(str, clean_string(str, 0)));
}

/*int main()
{
	char str [] = "-2147483648"; //2147483647//
	printf("ft_atoi: %i",ft_atoi(str));
	printf("%c", '\n');
	printf("atoi: %i", atoi(str));
	return(0);
}*/