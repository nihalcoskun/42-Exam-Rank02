#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int do_op(char *str , char *op, char *str2)
{
    int value;
    int first = atoi(str);
    int second = atoi (str2);

    if(*op == '*')
    {
        value = (first * second);
        printf("%d",value);

    }
    if(*op == '/')
    {
        value = (first / second);
        printf("%d",value);

    }
    if(*op == '+')
    {
        value = (first + second);
        printf("%d",value);

    }
    if(*op == '-')
    {
        value = (first - second);
        printf("%d",value);

    }
    if(*op == '%')
    {
        value = (first % second);
        printf("%d",value);

    }

    return (0);
      
}


int main(int argc, char **argv)
{
    if(argc == 4)
    {
        do_op(argv[1], argv[2], argv[3]); 
    }
   
   else
         write(1,"\n",1);
        
    return (0);
}