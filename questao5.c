#include <stdio.h>

int main () {
    int idade, i, cont = 0;
    float somaI = 0;
    float peso, altura, medIdade, porcentagem;
    float cont2 = 0, cont3 = 0;

    for (i = 1; i <= 10; i++) {
        printf("\nInformações da pessoa %d:  \n", i);
        printf("Digite a idade:  ");
        scanf("%d", &idade);
        printf("\nDigite o peso:  ");
        scanf("%f", &peso);
        printf("\nDigite a altura:  ");
        scanf("%f", &altura);  

        somaI = somaI + idade;
        medIdade = somaI / 10;

        if (peso > 80 && altura < 1.50) {
            cont++;
        }

        if (altura > 1.90) {
            cont3++;
            if (idade >= 10 && idade <= 30) {
                cont2++;
            }
        }
    }

    // Calcular a porcentagem após o loop
    porcentagem = (cont2 / cont3) * 100;

    printf("A média das idades é igual a %.2f \n", medIdade);
    printf("%d pessoas estão acima de 80kg e com altura inferior a 1.50m \n", cont);
    printf("Das pessoas que têm mais de 1.90m, %.1f porcento estão na faixa de 10-30 anos. \n", porcentagem);

    return 0;
}

