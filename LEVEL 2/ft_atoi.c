#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int index = 0;
    int sign = 1;
    int result = 0;

    while(str[index] != '\0')
    {
        if(str[index] == ' ' || str[index] == '\t' || str[index] == '\r')
        {
            index++;
        }

        if(str[index] == '-')
        {
            sign = -1;
            index++;
        }

        if(str[index] == '+')
        {
            index++;
        }

        if(str[index] >= '0' && str[index] <= '9')
        {
            result *= 10;
            result += str[index] - '0';
            index++;
        }

    }

    return (result *= sign);
}


int main()
{
    int value = ft_atoi("345");
    printf("%d",value);

    return(0);
}
