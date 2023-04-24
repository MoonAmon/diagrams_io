#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{	
  int X;
  int Y;
  int A;

  printf("Digite X,Y:%s\n");
  scanf("%d,%d", &X, &Y);

  if (X > Y) {
  	 A = X - Y;
  } else {
  	 A = Y - X;
  }

  printf("A diferença e:%d", A);
  return 0;

}