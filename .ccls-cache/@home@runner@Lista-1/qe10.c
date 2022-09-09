#include <stdio.h>

int main(void) {
  float altura, largura, comprimento,volume;
  puts("digite a altura, largura e comprimento da caixa");
  scanf("%f %f %f", &altura, &largura, &comprimento);
  volume=altura*largura*comprimento;
  printf("Volume da caixa: %.2f",volume);
  return 0;
}