#include"libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *pointer;

    pointer = lst;
    while(pointer->next)
    {
        f(pointer->content);
        pointer = pointer->next;
    }
    
}