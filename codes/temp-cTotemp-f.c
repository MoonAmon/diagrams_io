#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{	
   float tempC;

   printf("Digite a temp em Fareheit:" );
   scanf("%f", &tempC);
   float tempF = ((tempC - 32) * 5 ) / 9;

   printf("Temperatura em Celsus: %.f\n", tempF);
   return 0;
}