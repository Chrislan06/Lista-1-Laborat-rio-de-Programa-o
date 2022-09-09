#include <stdio.h>
#include <math.h>
int main(void){
float d,x1,x2,y1,y2,coordenada;
  puts("digite as coordenadas do primeiro ponto (não use virgulas)");
  scanf("%f %f",&x1,&y1);
  puts("digite as coordenadas do segundo ponto (não use virgulas)");
  scanf("%f %f",&x2,&y2);
  coordenada = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
  d = sqrt(coordenada);
  printf("Distancia entre elas: %.2f",d);
  return 0;
}