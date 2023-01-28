#include"libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	ft_putstr_fd(s,fd);

}

int main()
{
	int nb = 48675;
	int fd = 1;
	ft_putnbr_fd(nb, fd);
	return(0);
}