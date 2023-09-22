#include <stdio.h>

int main() {
    int valor1, valor2, valor3;
    int opcao;

    // pedir os valores
    printf("Digite o primeiro número: ");
    scanf("%d", &valor1);
    printf("Digite o segundo número: ");
    scanf("%d", &valor2);
    printf("Digite o terceiro número: ");
    scanf("%d", &valor3);

    // Mostrar opções na tela
    printf("\n1 - Mostre os números em ordem crescente\n");
    printf("2 - Mostre os números em ordem decrescente\n");
    printf("3 - Mostre o menor número entre os demais.\n");
    printf("Escolha a opção desejada: ");
    scanf("%d", &opcao);
     
  // opcao 1
    if (opcao == 1) {
        if (valor1 <= valor2 && valor2 <= valor3) {
            printf("\nOrdem crescente: %d - %d - %d\n", valor1, valor2, valor3);
        } else if (valor1 <= valor3 && valor3 <= valor2) {
            printf("\nOrdem crescente: %d - %d - %d\n", valor1, valor3, valor2);
        } else if (valor2 <= valor1 && valor1 <= valor3) {
            printf("\nOrdem crescente: %d - %d - %d\n", valor2, valor1, valor3);
        } else if (valor2 <= valor3 && valor3 <= valor1) {
            printf("\nOrdem crescente: %d - %d - %d\n", valor2, valor3, valor1);
        } else if (valor3 <= valor1 && valor1 <= valor2) {
            printf("\nOrdem crescente: %d - %d - %d\n", valor3, valor1, valor2);
        } else {
            printf("\nOrdem crescente: %d - %d - %d\n", valor3, valor2, valor1);
        }
     
    // opcao 2
    } else if (opcao == 2) {
        if (valor1 >= valor2 && valor2 >= valor3) {
            printf("\nOrdem decrescente: %d - %d - %d\n", valor1, valor2, valor3);
        } else if (valor1 >= valor3 && valor3 >= valor2) {
            printf("\nOrdem decrescente: %d - %d - %d\n", valor1, valor3, valor2);
        } else if (valor2 >= valor1 && valor1 >= valor3) {
            printf("\nOrdem decrescente: %d - %d - %d\n", valor2, valor1, valor3);
        } else if (valor2 >= valor3 && valor3 >= valor1) {
            printf("\nOrdem decrescente: %d - %d - %d\n", valor2, valor3, valor1);
        } else if (valor3 >= valor1 && valor1 >= valor2) {
            printf("\nOrdem decrescente: %d - %d - %d\n", valor3, valor1, valor2);
        } else {
            printf("\nOrdem decrescente: %d - %d - %d\n", valor3, valor2, valor1);
        }
      
    // opcao 3
    }  else if (opcao == 3) {
      if (valor1 <= valor2 && valor1 <= valor3) {
        printf("\n%d - %d - %d",valor2, valor1, valor3);
        printf("\nou %d - %d - %d",valor3, valor1, valor2);
      } else if (valor2 <= valor1 && valor2 <= valor3) {
         printf("\n%d - %d - %d",valor1, valor2, valor3);
         printf("\nou %d - %d - %d",valor3, valor2, valor1);
      } else {
        printf("\n%d - %d - %d",valor1, valor3, valor2);
        printf("\nou %d - %d - %d",valor2, valor3, valor1);
        
      }
    }
    return 0;
}


