#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;
    int numero;
    int repetido;

    for (i = 0; i < 10; i++) {
        do {
            repetido = 0;

            printf("Digite o %dº número: ", i + 1);
            scanf("%d", &numero);

            for (j = 0; j < i; j++) {
                if (vetor[j] == numero) {
                    repetido = 1;
                    printf("Número já digitado! Digite outro.\n");
                    break;
                }
            }

        } while (repetido);

        vetor[i] = numero;
    }

    printf("\nVetor final:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}