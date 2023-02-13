#include <unistd.h>

void rstr_capitalizer(char *str)
{   
    int index = 0;
    while(str[index] != '\0')
    {
      if(str[index] >= 'A' && str[index] <= 'Z')
      {
        str[index] += ' ';
       
      }
      if((str[index] >= 'a' && str[index]<= 'z') && (str[index + 1] == ' ' || str[index + 1] == '\t' || str[index + 1] == '\0'))
      {
        str[index] -= ' ';
       
      }
       write(1,&str[index],1);
      index++;
    }
}


int main(int argc, char** argv)
{   
    int index = 1;
    
    if(argc < 2)
    {
        write(1,"\n",1);
    }
    else

     while(index < argc)
     {
        rstr_capitalizer(argv[index]);
        write(1,"\n ",1);
        index++;
     }
     


    return(0);
}