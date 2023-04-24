#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main (void){


    char NOME[50];
    char SEXO;
    const char M = 'M', F = 'F';

    printf("Digite seu nome e seu sexo: ");
    scanf("%s", &NOME);
    
    printf("Digite seu sexo: ");
    scanf(" %c", &SEXO);

    if (SEXO == M || SEXO == F) {

        if (SEXO == M) {
            printf("Saudaçoes Sr.%s",NOME);
        }
        else {
            printf("Saudaçoes Sra.%s",NOME);
        }

    } else {
        printf("Sexo informado invalido!");
    }

    return 0;
}