/* Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);*/


int ft_strlen(char *str)
{
    int count = 0;
    while(str[count] != '\0')
    {
        count++;
    }

    return(count);
}