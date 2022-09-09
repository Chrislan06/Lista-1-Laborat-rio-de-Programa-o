#include <stdio.h>

int main(void){
int x, n, elevado=1;
  puts("digite um número para ser multiplicar por outro número de base 2");
  scanf("%d",&x);
  puts("digite o expoente da base 2");
  scanf("%d",&n);
elevado=elevado << n;
  printf("Valor final da multiplicação: %d",elevado*x);
  return 0;
}