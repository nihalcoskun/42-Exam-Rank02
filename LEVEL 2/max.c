#include <unistd.h>
#include <stdio.h>


int	max(int* tab, unsigned int len)
{
    int i = 0;
    int max = 0;
    while(i < len)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }

        i++;
    }
    return max;
}

int main ()
{
    int arr[] = {3,1,80,32,67,43,78,42,12};
    printf("%d", max(arr,9));
    return (0);
}