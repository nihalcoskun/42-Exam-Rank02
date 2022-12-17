/* Write a function called ft_list_remove_if that removes from the
passed list any element the data of which is "equal" to the reference data.

It will be declared as follows :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
$>*/

#include "list.h"
#include <unistd.h>
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *current;

    if((begin_list == NULL) || (*begin_list == NULL))
    {
        return;
    }

    current = *begin_list;

    if(cmp(current->data,data_ref) == 0)
    {
        *begin_list = current->next;
        free(current);
        ft_list_remove_if(begin_list,data_ref,cmp); 
    }
    current= *begin_list;
    ft_list_remove_if(&current->next,data_ref,cmp);
}