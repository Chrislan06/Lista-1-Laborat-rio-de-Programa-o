#include <stdio.h>

int main(void){
int numero, p,s,t,numero_tras;
puts("digite um número");
  scanf("%d",&numero);
  p=numero/100;
  s=((numero%100)/10)*10;
  t=(numero%10)*100;
  numero_tras= p+s+t;
  printf("numero invertido: %d",numero_tras);
  return 0;
}