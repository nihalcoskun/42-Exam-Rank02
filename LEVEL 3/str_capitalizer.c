/* Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a word only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>*/

#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void str_capitalizer(char *str)
{
    int index = 0;
    if(str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - ' ';
        ft_putchar(str[index]);
    }

    index++;

    while(str[index] != '\0')
    {
        if((str[index] != ' ') && (str[index] != ' ') && (str[index - 1] == ' '))
        {
            if(str[index] >= 'a' && str[index] <= 'z')
            {
                str[index] = str[index] - ' ';
                ft_putchar(str[index]);
            }
            else
            {
                ft_putchar(str[index]);
            }
        }
        else if(str[index] >= 'A' && str[index] <= 'Z')
        {
            str[index] = str[index] + ' ';
            ft_putchar(str[index]);
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
    int argNum = 1;
    if(argc >= 2)
    {
        while(argv[argNum])
        {
            str_capitalizer(argv[argNum]);
            write(1,"\n",1);
            argNum++;
        }
    }
    else
    {
        write(1,"\n",1);
    }
   
    return(0);
}