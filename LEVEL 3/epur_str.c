#include <unistd.h>

void ft_putchar(char str)
{
    write(1,&str,1);
}


void epur_str(char *str)
{
    int index = 0; 
    
    if(str[index] == ' ' || str[index] == '\t')
        index++;

    while(str[index] != '\0')
    {
        if(str[index] == ' ' || str[index] == '\t')
        {
            if(str[index + 1] > ' ' && str[index] != '\0')
                ft_putchar(' ');
        }

        else
        {
            ft_putchar(str[index]);
        }

        index++;
    }    
}




int main(int argc, char **argv)
{
    if(argc == 2)
    {
        epur_str(argv[1]);
    }

    write(1,"\n",1);
    return(0);
}