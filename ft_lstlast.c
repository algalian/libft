#include"libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *pointer;
    
    if(ft_lstsize == 0)
        return(NULL);
    if(ft_lstsize == 1)
        return(lst);
    pointer = lst
    while(pointer->next != NULL)
    {
        pointer = pointer->next;
    }
    return(pointer);

}