#include <stdio.h>

int main(){
    float valorHora, hora, min;
    int totalMin, totalSeg;
    
    printf("Digite o valor das horas (ex: 15.25, 15 horas e 25 minutos: \n");
    scanf("%f", &valorHora);

    hora = (int)valorHora;
    min = (valorHora -(int)valorHora) * 100;

    if ((hora > 23 || hora < 0 || (min > 59 || min < 0))){
      
      printf("a hora sera representada pela parte inteira, entao ela so vai de 0 a 23, e os minutos pela parte decimal, indo de 0 ate 59!\n");
    } else {
      totalMin = hora * 60 + min;
      totalSeg = totalMin * 60;
      printf("a hora digitada equivale a %d minutos ou %d segundos.", totalMin, totalSeg);
}

return 0;
  

}