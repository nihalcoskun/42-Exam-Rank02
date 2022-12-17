/* Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);*/


#include <unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int index = 0;
    int sign = 1;
    int result = 0;
    
    if(str[index] == '-')
    {
         sign *= -1;
         index++;
    }
    
    while(str[index] != '\0')
    {
        result *=str_base;
        if(str[index] >= '0' && str[index] <= '9')
        {
            result += str[index] - '0';
        }
        else if(str[index] >= 'a' && str[index] <= 'z')
        {
             result += str[index] - 'W';
        }
        else if(str[index] >= 'A' && str[index] <= 'Z')
        {
             result += str[index] - '7';
        }

        index++;
    }

    return (result * sign);
}