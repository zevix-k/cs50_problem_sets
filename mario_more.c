/*
Allyson Curtis
allyson.curtis@aggiemail.usu.edu
6-21-17
cs50/week_1/mario_more_comfortable

Create two half-pyramids; max 23 units in height, 2 units in between each half-pyramid

*/
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    int hash = 1;
    int space = 0;
    
    do
    {
    printf("Please enter how tall you would like the half pyramids to be: %i\n", height);
    height = get_int();
    } while(height < 0 || height > 23);
 
    for(int i = 0; i < height; i++)
    {
        space = height - hash;
        for(int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < hash; k++)
        {
            printf("#");
        }
        printf("  ");
        for(int l = 0; l < hash; l++)
        {
            printf("#");
        }
        printf("\n");
        hash++;
    }
 
    return 0;
}