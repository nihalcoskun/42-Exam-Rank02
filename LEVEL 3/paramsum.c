/* 
Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>*/

#include <unistd.h>

void putnbr(int number)
{
    char digit;
    if(number > 9)
    {
        putnbr(number / 10);
    }
    else
    {
        digit = (number % 10) + '0';
    }
    write(1,&digit,1);

}


int main (int argc, char **argv)
{
    if(argc == 0)
    {
        putnbr(0);
    }
    else
    {
        putnbr(argc - 1);
    }
    write(1,"\n",1);
}