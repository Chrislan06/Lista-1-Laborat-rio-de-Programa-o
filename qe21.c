#include <stdio.h>

int main(void){
int x,y;
  puts("digite dois números");
  scanf("%d %d",&x,&y);
  (x%y)? printf("Número não é múltiplo"):printf("Número é múltiplo");
  return 0;
}