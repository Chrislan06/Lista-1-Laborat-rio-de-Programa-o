#include <stdio.h>

int main(void) {
  int X;
  puts("digite um número: ");
  scanf("%d", &X);
  printf("Valor de X em hexa: %X", X);
  printf("\nValor de X em hexa: %o", X);
  return 0;
}