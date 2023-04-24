#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	const float Pi = 3.14;
	float R;
	float Alt;

	printf("Digite o raio da lata: ");
	scanf("%f", &R);

	printf("Digite a altura da lata:");
	scanf("%f", &Alt);

	double Rx = pow(R , 2);
	float Vol = Pi * Rx * Alt;
	printf("O volume da lata é: %.3f", Vol);

	return 0;
}