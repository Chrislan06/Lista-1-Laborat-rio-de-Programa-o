#include <stdio.h>

int main(void) {
  int a, b, r;
  puts("Digite o valor de A");
  scanf("%d", &a);
  puts("Digite o valor de B");
  scanf("%d", &b);

  printf("(antes da troca)valor de A: %d Valor de B: %d",a,b);
  r= a^b;
  b= b^r;
  a= b^r;
  printf("\nvalor de A: %d Valor de B: %d",a,b);
  return 0;
}