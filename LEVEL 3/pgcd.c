/* Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_pgcd(int a, int b)
{
    if((a <= 0 ) || (b <= 0))
    {
        return 0;
    }

    int min;
    if(a < b)
    {
        min = a;
    }
    else if(b < a)
    {
        min = b;
    }
    
    int index = 1;
    int division;

    while(index < min)
    {
        if((a % index == 0) && (b % index == 0))
        {
            division = index;
        }
        index++;
        
    }

    return(division);

}



int main(int argc,char **argv)
{
    if(argc == 3)
    {
        int first = atoi(argv[1]);
        int second = atoi(argv[2]);
        printf("%d",ft_pgcd(first,second));
    }
    write(1,"\n",1);
    return(0);
}