/* Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$> */



#include <unistd.h>

void putchar(char c)
{
    write(1,&c,1);
}

int ft_strlen(char *str)
{
    int count = 0;
    while(str[count] != '\0')
    {
        count++;
    }

    return(count);
}

void printFirst(char *str)
{
    int index = 0;

    while(str[index] == ' ' || str[index] == '\t')
    {
        index++;
    }
    while(str[index] != ' ' && str[index] != '\t')
    {
        putchar(str[index]);
        index++;
    }

}

void rostring(char *str)
{
    int index = 0;

    while(str[index] == ' ' || str[index] == '\t')
    {
        index++;
    }
    while(str[index] != ' ' && str[index] != '\t')
    {
        index++;
    }
    while(str[index] == ' ' || str[index] == '\t')
    {
        index++;
    }
    while(str[index] != '\0')
    {
        if(str[index] == ' ' || str[index] == '\t')
        {
            if(str[index + 1] == ' ' || str[index + 1] == '\t')
            {
                index++;
            }
            else
            {
                putchar(str[index]);
                index++;
            }
        }
        else
        {
            putchar(str[index]);
            index++;
        }        
    }
     int size = ft_strlen(str);
     if(str[size] != ' ')
     {
        putchar(' ');
     }

    printFirst(str);
    
}


int main(int argc, char **argv)
{
    if(argc > 1)
    {
        rostring(argv[1]);
    }
    write(1,"\n",1);
    return (0);
}