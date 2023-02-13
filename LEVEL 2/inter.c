#include <unistd.h>


int ft_strlen(char *str)
{
    int index;
    index = 0;
    while(str[index] != '\0')
    {
        index++;
    }

    return index;
}


void ft_inter( char *str1, char *str2)
{
    int i;
    i = 0;
    int j;
    int count = ft_strlen(str2);
    int check = 0;
    while(str1[i] != '\0')
    {
        for(j = 0; j < count ; j++ )
        {
            if(str2[j] == str1[i])
            {
                check = 1;
            }
            
            else
                check = 0;
        }

        if(check == 1)
        {
            write(1,&str1[i],1);
        }

        i++;
    }
}


int main(int argc, char **argv)
{
    if(argc == 3)
    {
        ft_inter(argv[1],argv[2]);
    }

    write(1,"\n",1);
    return(0);
}