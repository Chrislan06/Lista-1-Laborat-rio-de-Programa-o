#include <stdio.h>

int main(void) {
  int segundos, horas, minutos, total;
  puts("A quantidade de horas minutos e segundos");
  scanf("%d %d %d", &horas, &minutos, &segundos);
  total = horas * 3600 + minutos * 60 + segundos;
  printf("Total do tempo em segundos: %d", total);
  return 0;
}