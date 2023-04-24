#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
	float N1, N2, N3, N4, MD;

	printf("Digite as 4 notas finais:");
	scanf("%f,%f,%f,%f",&N1,&N2,&N3,&N4);

	float MD = (N1+N2+N3+N4)/4;

	if (MD >= 5)
	{
		printf("Aluno aprovado");

	} else {
		
		printf("Aluno reprovado");
	}

	return 0;
}