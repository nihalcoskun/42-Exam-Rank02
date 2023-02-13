#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
     int index;
     index = 0;

      while(s2[index] != '\0')
      {
       
        s1[index] = s2[index];
        index++;   
      }
        s1[index] = '\0';
      return s1;

}
/*
char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;
	
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
} */

int main()
{
    char str1[] = "Hello İstanbul";
    char str2[] = "Hello New York";
    printf("%s",str1);
    printf("%s",str2);
    ft_strcpy(str1,str2);
    printf("%s","---------------");
    printf("%s",str1);
    printf("%s",str2);


    return(0);


}