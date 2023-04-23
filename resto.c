#include <stdio.h>
#include <stdint.h>

int main (void)
{
    int x;

    printf("Digite o numero:");
    scanf("%d",&x);

    float y = x % 2;
   
   if (y != 0)
   {
    printf("Numero impar!");
   } else 
   {
    printf("Numero par!");
   }

   
   return 0;


}