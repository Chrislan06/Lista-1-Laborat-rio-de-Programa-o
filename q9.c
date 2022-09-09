#include <stdio.h>

int main(void) {
  int x;
  puts("digite um valor");
  scanf("%d", &x);
  printf("Sucessor:%d\nAntecessor: %d", x + 1, x - 1);
  return 0;
}