#include <unistd.h>

void putchar_n(char str, int n)
{
    while(n > 0)
    {
        write(1,&str,1);
        n--;
    }
}

void repeat_alpha(char *str)
{

       while(*str != '\0') 
        {
           if(*str >= 'a' && *str <= 'z')
            putchar_n(*str,*str+1 - 'a');

           else if(*str >= 'A' && *str <= 'Z')
            putchar_n(*str,*str+1 - 'A');

           else
            write(1,str,1);
        
        str++;
        }

}

int main(int argc , char **argv)
{
    if(argc == 2)
    {
        repeat_alpha(argv[1]);
    }
    write(1,"\n",1);
    return (0);
}