#include <stdio.h>

int main(void) {
  float a;
  puts("Digite um valor(real)");
  scanf("%f", &a);
  printf("Valor lido com apenas duas casas decimais: %.2f ", a);

  return 0;
}