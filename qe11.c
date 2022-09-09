#include <stdio.h>

int main(void){
float dolar, real, cotacao;
  puts("digite a cotação do dolar");
  scanf("%f",&cotacao);
  puts("digite o valor a ser convertido (em real)");
  scanf("%f",&real);
  dolar = real/cotacao;
  printf("valor do real em dolar:%.2f ",dolar);
  return 0;
}