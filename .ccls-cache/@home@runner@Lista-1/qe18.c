#include <stdio.h>
#define PI 3.14159
int main(void){
float raio;
  puts("Digite o valor do raio da circunferência");
  scanf("%f",&raio);
  printf("Diâmetro: %.1f\nCircunferência: %.5f\nÁrea: %.5f",raio*2,2*PI*raio,PI*(raio*raio));
  return 0;
}