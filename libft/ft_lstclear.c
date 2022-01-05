#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *list;
    t_list *next;

    list = *lst;
    while (list->next)
    {
        next = list->next;
        ft_lstdelone(list, del);
        list = next;
    }
    ft_lstdelone(list, del);
    *lst = NULL;
}