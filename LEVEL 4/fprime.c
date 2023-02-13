#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int number = atoi(argv[1]);
    if(argc == 2)
    {
        if(*argv[1] == '1')
        {
            write(1,"1",1);
        }

        int i = 2;

        while(i <= number)
        {
            if(number % i == 0)
            {
                printf("%d",i);
                if(i == number)
                {
                  break;
                }
                printf("*");
                number = number / i ;
                i = 2;
            }
            i++;
        }
    }

    printf("\n");
}