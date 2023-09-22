//questao 4
#include <stdio.h>
int main() {
  int num,numero, fat;
  printf("\nDigite um número inteiro e positivo (ou 0 para sair) \n");
  scanf("%d", &num);

  
while (num != 0) {
  numero = num;
  for(fat = 1; num > 1; num = num - 1) {      
      fat = fat * num;
  }

printf("\nO fatorial de %d é igual a %d\n", numero, fat);

  printf("\nDigite um número inteiro e positivo (ou 0 para sair) \n");
  scanf("%d", &num);
}
  
return 0;
}