#include"libft.h"

void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s,fd);
    write(fd,"\n",1);

}

int main()
{
    char string[] = "Mary had a little lamb";
    ft_putendl_fd(string, 1);
    return(0);
}