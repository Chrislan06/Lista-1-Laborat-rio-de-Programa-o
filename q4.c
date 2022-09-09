#include <stdio.h>

int main(void) {
int x;
  puts("digite um valor");
  scanf("%d",&x);
  printf("triplo do valor lido: %d\n",x*3);
  printf("metade do valor lido: %d\n",x/2);
  printf("quadrado do valor lido: %d",x*x);
  return 0;
}