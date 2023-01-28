#include"libft.h"

void ft_putstr_fd(char *s, int fd)
{
    unsigned int i;
    i = 0;

    while(s[i] != '\0')
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}

/*int main()
{
    char string[] = "yippie kai yai";
    ft_putstr_fd(string, 1);
    return(0);
}*/