#include <unistd.h>

void ft_putchar(char str)
{
    write(1,&str,1);
}


void camel_to_snake(char *str)
{
    int index;
    index = 0;
    char *snake = "_";

    while (str[index] != '\0')
    {
        if(str[index] >= 'A' && str[index] <= 'Z')
        {
        ft_putchar(*snake);
        str[index] += ' ';
        }
        ft_putchar(str[index]);
        index++;
    }
    
}


int main(int argc, char ** argv)
{
    if(argc == 2)
    {
        camel_to_snake(argv[1]);
    }

    return(0);

}