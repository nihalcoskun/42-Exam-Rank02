/* Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$*/


#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}


int print_hex(int num)
{
    if(num >= 16)
    {
        print_hex(num / 16);
    }
    ft_putchar("0123456789abcdef"[num % 16]);
}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int num = atoi(argv[1]);
        if(num >= 0)
        {
           printf("%d",print_hex(num));
        }    
    }
    writw(1,"\n",1);
    return(0);
}