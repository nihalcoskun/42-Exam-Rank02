/* Write a program called search_and_replace that takes 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $*/


#include <unistd.h>

int ft_strlen(char *str)
{
    int count = 0;
    while(str[count] != '\0')
    {
        count++;
    }
    return(count);
}

int checkContain(char *str, char c)
{
    int index = 0;
    while(str[index] != '\0')
    {
        if(str[index] == c)
        {
            return(1);
        }
        index++;
    }
    return (0);
}

void printWithChanged(char *str, char c, char s)
{
    int index = 0;
    while(str[index] != '\0')
    {
        if(str[index] == c)
        {
            write(1,&s,1);
        }
        else
        {
            write(1,&str[index],1);
        }
        index++;
    }
}

void printStr(char *str)
{
    int index = 0;
    while(str[index] != '\0')
    {    
        write(1,&str[index],1);
        index++;
    }
}


void search_and_replace(char *s1,char *s2, char *s3)
{

    if( checkContain(s1,s2[0]) == 1)
    {
        printWithChanged(s1,s2[0],s3[0]);
    }
    else
    {
        printStr(s1);
    } 
   
}


int main(int argc, char **argv)
{
    if((argc == 4) && (ft_strlen(argv[2]) == 1) && (ft_strlen(argv[2]) == 1))
    {
        search_and_replace(argv[1],argv[2],argv[3]);
    }
    write(1,"\n",1);
    return(0);
}