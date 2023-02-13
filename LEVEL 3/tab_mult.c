#include <unistd.h>

int ft_atoi(char *number)
{
    int index = 0;
    int sign = 1;
    int result = 0;

    while(number[index] != '\0')
    {
        if(number[index] == ' ' || number[index] == '\t')
        {
            index++;
        }
         if(number[index] == '-')
        {
            sign = -1;
            index++;
        }
         if(number[index] == '+')
        {
            index++;
        }
         if(number[index] >= '0' && number[index] <= '9')
        {
            result *= 10;
            result += number[index] - '0';
            index++;
        }
    }
    return (result * sign);
}

void ft_putnbr(int number)
{
    char digit;

    if(number > 9)
    {
        ft_putnbr(number / 10);
        ft_putnbr(number % 10);
    }
    else
    {
        digit = number + '0';
        write(1,&digit,1);
    }
    
}


void tab_mult(int number)
{

    for(int i = 1; i <10 ; i++)
    {
        int result = i * number;
        if(result <= 2147483647)
        {
            ft_putnbr(i);
            write(1," x ",3);
            ft_putnbr(number);
            write(1," = ",3);
            ft_putnbr(result);
            write(1,"\n",1);

        }
    }    

}



int main(int argc, char **argv)
{   
    int num;
    
    if(argc == 2)
    {
        num = ft_atoi(argv[1]);
        tab_mult(num);
        
    }
    write(1,"\n",1);
    return(0);
}