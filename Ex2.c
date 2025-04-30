#include <stdio.h>

void detalheEscada(int tamanho) {
    // Inicio - Detalhe da Escada
    for (int i = 1; i <= tamanho; i++) {
        // Imprimir espaços à esquerda
        for (int j = 1; j <= tamanho - i; j++) {
            printf(" ");
        }
        // Imprimir #
        for (int k = 1; k <= i; k++) {
            printf("#");
        }
        printf("\n");
    }
    // Fim - Detalhe da Escada
}

int main() {
    detalheEscada(5);

    printf("\n\n");

    detalheEscada(7);

    printf("\n\n");

    int numeros[5];
    numeros[0] = 1;
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 4;
    numeros[4] = 5;

    // Aqui você pode adicionar o código que usa o array 'numeros'
    // Por exemplo, para imprimir os elementos:
    printf("Elementos do array numeros: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}