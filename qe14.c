#include <stdio.h>

int main(void){
float f,c;
  puts("Digite a temperatura em C");
  scanf("%f",&c);
  f= (9*c+160)/5;
  printf("Temperatura em Fahrenheits: %.2f",f);
  return 0;
}