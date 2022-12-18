/* Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$*/

#include <unistd.h>


void printStr(char *str)
{
    int index = 0;
    while(str[index] != '\0')
    {    
        write(1,&str[index],1);
        index++;
    }
}

int ft_strlen(char *str)
{
    int count = 0;
    while(str[count] != '\0')
    {
        count++;
    }

    return(count);
}

void wdmatch(char *s1, char *s2)
{
    int index1 = 0;
    int index2 = 0;

    while(s2[index2] != '\0')
    {
        if(s1[index1] == s2[index2])
        {
            index1++;      
        }
        index2++;
    }

    if(ft_strlen(s1) == index1)
    {
        printStr(s1);
    }
}



int main(int argc, char **argv)
{
    if(argc == 3)
    {
        wdmatch(argv[1],argv[2]);
    }
    write(1,"\n",1);
    return(0);
}