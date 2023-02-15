#include"libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *pointer;
    pointer = *lst;
    if(!lst)
        return;
    while(pointer->next)
    {
        ft_lstdelone(pointer, del);
        pointer = pointer->next; 
    }
    pointer->next = NULL;
}
