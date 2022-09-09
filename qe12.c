#include <stdio.h>

int main(void) {
  int x1, x2;
  puts("digite dois números");
  scanf("%d %d", &x1, &x2);
  printf("Soma: %d\n", x1 + x2);
  printf("Produto: %d\n", x1 * x2);
  printf("Diferença: %d\n", x1 - x2);
  printf("Quociente: %.2f\nResto: %d ", (float)x1 / x2, x1 % x2);
  return 0;
}