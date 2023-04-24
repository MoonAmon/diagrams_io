#include <stdio.h>
#include <stdint.h>

int main (void){

    int A, B, C, D, E;

    printf("Digite os 5 numeros:\n");
    scanf("%d,%d,%d,%d,%d",&A,&B,&C,&D,&E);

    if (A > B && A > C && A > D && A > E)
     {
         printf("O numero %d é o maior!\n",A);
     } else if (B > A && B > C && B > D && B > E) {

        printf("O numero %d é o maior!\n",B);

     } else if (C > A && C > B && C > D && C > E) {

         printf("O numero %d é o maior!\n",C);

     } else if (D > A && D > B && D > C && B > E) {

         printf("O numero %d é o maior!\n",D);
        
     } else {

         printf("O numero %d é o maior\n!",E);
        
     } if (B > A && C > A && D > A && E > A) {

         printf("O numero %d é o menor!\n",A);
        
     } else if (A > B && C > B && D > B && E > B) {

        printf("O numero %d é o menor!\n",B);
        
     } else if (C > B && C > D && C > E && C > A) {

        printf("O numero %d é o menor!\n",C);
        
     } else if (D > A && D > B && D > E && E > C) {

        printf("O numero %d é o menor!\n",D);
        
     } else {

        printf("O numero %d é o menor!\n",E);
        
     }

     return 0;



}