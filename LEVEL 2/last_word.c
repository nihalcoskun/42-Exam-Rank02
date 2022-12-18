/* Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$> */

#include <unistd.h>

int ft_strlen(char *str)
{
    int count = 0;
    while(str[count] != '\0')
    {
        count++;
    }

    return(count);
}

void last_word(char *str)
{
    int size = ft_strlen(str);


    while(str[size] == ' ' || str[size] == '\t')
    {
        size--;
    }
    while(str[size] != ' ' && str[size] != '\t')
    {
        size--;
    }
    size = size + 1;
    while((str[size] != ' ' && str[size] != '\t') && str[size] != '\0')
    {
        write(1,&str[size],1);
        size++;
    }

}

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        last_word(argv[1]);
    }
    write(1,"\n",1);
    return(0);
}