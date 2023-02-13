#include <unistd.h>

void	ft_putstr(char *str)
{
    while(*str)
    {
        write(1,str,1);
        str++;
    }
}

int main(int argc, char **argv)
{
    ft_putstr("nihal  gsgjlksgkşs  545512     sdgsdg sg87 757dg5 ");
    return(0);
}