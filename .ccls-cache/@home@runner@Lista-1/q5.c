#include <stdio.h>

int main(void) {
  float valor;
  puts("Digite o valor a ser pago");
  scanf("%f", &valor);
  printf("Valor final a ser pago pelo cliente: %.2f", valor + valor * 0.1);

  return 0;
}