/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algalian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:40:32 by algalian          #+#    #+#             */
/*   Updated: 2023/01/30 12:40:34 by algalian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	ft_putstr_fd(s, fd);
}

/*int main()
{
	int nb = 48675;
	int fd = 1;
	ft_putnbr_fd(nb, fd);
	return(0);
}*/
