#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
  

//YARIM KALDI DÖNÜLECEK



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{   
    int count = 0;
    while(*str != '\0')
    {
        count++;
    }

    return(count);
}

void ft_hidenp(char* str1, char *str2)
{
    int i = 0;
    int j = 0;
    int size = ft_strlen(str1);
    char *arr = (char*)malloc(sizeof(char * size));
    int index = 0;
   

    int z = 0;
    while(z < index)
    {   
        if(arr[z] > arr[z+1])
        {
             ft_putchar(0);
        }
         z++;
    }

    ft_putchar(1);
}

int main(int argc, char **argv)
{   
    if(argc == 3 )
    {
         ft_hidenp(argv[1],argv[2]);
    }

    write(1,"\n",1);
    return (0);
}