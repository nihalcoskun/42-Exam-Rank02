#include <unistd.h>

void ft_putchar(char str)
{
    write(1,&str,1);
}

void rot_13(char *str)
{   int index;
    index = 0;
    while (str[index] != '\0')
    {
    if(str[index] >= 'a' && str[index] <= 'm' || str[index] >= 'A' && str[index] <= 'M')
        str[index] +=13;

    else if (str[index] >= 'n' && str[index] <= 'z' || str[index] >= 'N' && str[index] <= 'Z') 
            str[index] -=13;

    ft_putchar(str[index]);
    index++;
    }
}


int main(int argc, char **argv)
{
    if(argc == 2)
    {
        rot_13(argv[1]);
    }

    write(1,"\n",1);
    return (0);
}