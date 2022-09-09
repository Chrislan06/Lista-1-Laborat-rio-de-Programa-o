#include <stdio.h>

int main(void) {
  float altura, peso_ideal;
  char sexo;
  puts("Qual seu Sexo");
  puts("H-Homem");
  puts("M-Mulher");
  sexo = getchar();
  puts("Digite sua Altura(Em metros)");
  scanf("%f", &altura);
  if (sexo == 'H') {
    peso_ideal = 72.7 * altura - 58;
    printf("seu peso ideal é: %.2f kg", peso_ideal);
  }
  else {
    peso_ideal = 62.1 * altura - 44.7;
    printf("seu peso ideal é: %.2f kg", peso_ideal);
  }
  return 0;
}