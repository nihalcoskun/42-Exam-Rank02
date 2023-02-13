#include <unistd.h>

void ft_putchar(char str)
{
    write(1,&str,1);
}

void ulstr(char *str)
{
    int index;
    index = 0;

    while(str[index] != '\0')
    {
    if(str[index] >= 'a' && str[index] <= 'z')
    { 
        str[index] -= ' ';
    }

     else if(str[index] >= 'A' && str[index] <= 'Z')
    { 
        str[index] += ' ';
    }

    ft_putchar(str[index]);
    index++;
    }
}



int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ulstr(argv[1]);
    }

    write(1,"\n",1);
    return (0);
}