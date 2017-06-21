/*
Allyson Curtis
allyson.curtis@aggiemail.usu.edu
6-21-17
cs50/week-1/Mario

Create a half-pyramid with a height based on user input that uses "#" symbol for blocks

*/
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    int hash = 2;
    int space = 0;
    do
    {
        printf("Please enter the height of the pyramid between 0 and 23, inclusive: %i\n", height);
        height = get_int();
    }while (height < 0 || height >= 23);
    
    
    for (int i = 0; i < height; i++)
    {
       space = height - hash + 1;
       for (int j = 0; j < space; j++)
       {
           printf(" ");
       }
       for (int k = 0; k < hash; k++)
       {
           printf("#");
       }
       printf("\n");
       hash++;
    }
    return 0;
}
