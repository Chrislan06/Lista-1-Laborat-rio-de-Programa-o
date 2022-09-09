#include <stdio.h>

int main(void){
int x;
  puts("Digite um valor inteiro");
  scanf("%d",&x);
  printf("Valor Absoluto do Número Digitado(módulo)\n%d ",(x<0)?~x+1:x);
  return 0;
}