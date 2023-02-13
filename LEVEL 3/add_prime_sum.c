#include <unistd.h>

void ft_putnumber(int number)
{
   char digit;

    if(number > 9)
    {
        ft_putnumber(number / 10);
        ft_putnumber(number % 10);
    }
    else
    {
        digit = number + '0';
        write(1,&digit,1);
    }
}

int is_prime(int number)
{
    int index = 2;

    while(index < number)
    {
        if((number % index) == 0 && (number != index))
        {
            return (0);
        }

        index++;
    }
    
    return(1);
}

int ft_atoi(char *number)
{
    int index = 0;
    int sign = 1;
    int result = 0;

    while(number[index] != '\0')
    {
      if(number[index] == ' ' || number[index] == '\t' || number[index] == '\r')
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

void add_prime_sum(int number)
{
    int index = 2;
    int sum = 0;

    while(index <= number)
    {
       if(is_prime(index))
       {
         sum += index; 
       }

       index++;
    }
    
    ft_putnumber(sum);
}


int main(int argc,char **argv)
{
    int number;

    if(argc == 2 && *argv[1] != '-')
    {
        number = ft_atoi(argv[1]);  
        add_prime_sum(number);  
    }
    else
        write(1,"0",1);

    return (0);    
}