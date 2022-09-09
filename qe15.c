#include <stdio.h>

#define DIARIA 50.25

int main(void) {
  int dias;
  float salariob, salariol;
  puts("Quantidade de dias trabalhados");
  scanf("%d", &dias);
  salariob=dias*50.25;
  if (dias>10 && dias<=20) {
    salariob += salariob * 0.2;
  } 
  else if(dias > 20) {
    salariob += salariob * 0.3;
  }
  salariol=salariob-(salariob*0.1);
  printf("Salario Liquido: %.2f",salariol);
  return 0;
}