#include <stdio.h>

int main(void) {
  float salariob, salariol, hora_aula, inss;
  short int horas_trabalhadas;
  puts("Digite o valor da hora aula");
  scanf("%f", &hora_aula);
  puts("Digite a quantidade de horas trabalhadas");
  scanf("%hd", &horas_trabalhadas);
  puts("Digite o valor do inss");
  scanf("%f", &inss);
  salariob = hora_aula * horas_trabalhadas;
  inss /= 100;
  salariol =salariob - (salariob * inss);
  printf("Salario Bruto: %.2f\nSalario Liquido:%.2f ",salariob,salariol);

  return 0;
}