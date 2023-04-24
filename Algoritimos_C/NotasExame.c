#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
	float n1,n2,n3,n4,ne,md2;

	printf("Digite as notas bimestral:");
	scanf("%f,%f,%f,%f,",&n1,&n2,&n3,&n4);

	float md1 = (n1+n2+n3+n4)/4;

	if (md1>=7)
	{
		printf("Aprovado!%2.f",md1);
		return 0;
	} else {
		printf("Digite nota do exame;");
		scanf("%f", &ne);
		float md2 = (md1+ne)/2;
	 if (md2>=5)
	{
		printf("Aprovado em exame:%2.f",md1);
	} else {
		printf("Reprovado!");
	};

	return 0;
}
}