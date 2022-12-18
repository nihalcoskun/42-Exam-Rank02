/* Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);*/

#include <unistd.h>
#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    int index = 2;

    while(index <= n)
    {
        if(index == n)
        {
            return(1);
        }
        index = index + 2;
    }

    return (0);
}

int main()
{
    printf("%d",is_power_of_2(8));
    printf("%d",is_power_of_2(11));
    printf("%d",is_power_of_2(22));
    printf("%d",is_power_of_2(99));
    printf("%d",is_power_of_2(36));
    printf("%d",is_power_of_2(1));
    printf("%d",is_power_of_2(0));
}