/* Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);*/


#include<unistd.h>

void	print_bits(unsigned char octet)
{
    unsigned char bit;
    unsigned char mask = 1;
    int index = 7;

    while(index >= 0)
    {
        bit = (((octet >> index) & mask) + '0');
        write(1,&bit,1);
        index--;
    }
}