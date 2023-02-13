#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    int size = 0;

    while(begin_list != NULL)
    {
        size++;
        begin_list = begin_list->next;
    }

    return(size);
}

int main()
{
   t_list *p =  (t_list*)malloc(sizeof(t_list));
   t_list *s =  (t_list*)malloc(sizeof(t_list));
   t_list *j =  (t_list*)malloc(sizeof(t_list));
   t_list *t =  (t_list*)malloc(sizeof(t_list));
	
	p->next = s;
	s->next = j;
	j->next = t;
	printf("%d\n", ft_list_size(p));
	return 0;
}