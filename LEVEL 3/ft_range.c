/* Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3. */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *arr;
    int size;

    if(start == end)
    {
        return (0);   
    }

    if(start < end)
    {
        size = (end - start) + 1;
        arr = (int*)malloc(sizeof(size));
        for(int i = 0 ; i < size ; i++)
        {
            arr[i] = start;
            start++;
        }

        return arr;    
    }

    if(start > end)
    {
        size = (start - end) + 1;
        arr = (int*)malloc(sizeof(size));
        for(int i = 0 ; i < size ; i++)
        {
            arr[i] = start;
            start--;
        }

        return arr;    
    }

    return(0);
}

int main()
{
    int *list;
    list = ft_range(0,-3);
    int i = 0;
    while(i < 4)
    {
        printf("%d",list[i]);
        i++;
    }
    return (0);
}

