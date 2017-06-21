#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int showerMinutes = 0;
    int waterPerMinute = 192;
    int waterBottleSize = 16;
    int waterBottleTotal = 0;
    printf("How long was your shower today?\n");
   do
   {
    showerMinutes = get_int();
   } 
   while (showerMinutes <= 0);
   
   waterBottleTotal = (showerMinutes * waterPerMinute) / waterBottleSize;
   
   printf("Minutes: %i\n", showerMinutes);
   printf("Bottles: %i\n", waterBottleTotal);
   return 0;
}
