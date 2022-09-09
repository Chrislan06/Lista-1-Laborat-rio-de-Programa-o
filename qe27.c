#include <stdio.h>
#include <math.h>

int main(void){
float n1,n2,n3,mA,mG,Eg;
  printf("Notas\n");
  printf("N1: ");
  scanf("%f",&n1);
  printf("N2: ");
  scanf("%f",&n2);
  printf("N3: ");
  scanf("%f",&n3);
mA= n1+n2+n3/3;
Eg=n1*n2*n3;
mG= pow(Eg,((float)1/3));
  printf("Média Aritmética: %.2f\nMédia Geométrica: %.2f",mA,mG);
}