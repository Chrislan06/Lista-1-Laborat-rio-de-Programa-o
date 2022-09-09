#include <stdio.h>

int main(void){
int x;
  puts("Digite um número");
  scanf("%d",&x);
  (x%2)? printf("Impar"):printf("par");
  return 0;
}