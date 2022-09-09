#include <stdio.h>

int main(void){
int segundos;
  puts("Coloque a quantidade de segundos desejadas a ser convertidos em horas,minuto,segundos");
  scanf("%d",&segundos);
  printf("%d hora(s) %d minuto(s) %d segundo(s)",segundos/3600,(segundos%3600)/60,(segundos%3600)%60);
  return 0;
}