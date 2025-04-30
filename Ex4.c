#include <stdio.h>

void escadariaSagrada(int tamanho) {
    // Inicio - A Escadaria Sagrada
    int meio = (tamanho + 1) / 2;
    int valor;

    for (int i = 1; i <= tamanho; i++) {
        if (i <= meio) {
            valor = meio - i + 1;
        } else {
            valor = i - meio + 1;
        }
        for (int j = 1; j <= tamanho; j++) {
            printf("%d ", valor);
        }
        printf("\n");
    }
    // Fim - A Escadaria Sagrada
}

int main() {

    int pontosA[3];
    pontosA[0] = 17;
    pontosA[1] = 28;
    pontosA[2] = 30;

    int pontosB[3];
    pontosB[0] = 99;
    pontosB[1] = 16;
    pontosB[2] = 8;

    escadariaSagrada(5);

    printf("\n\n");

    escadariaSagrada(7);

    printf("\n\n");

    escadariaSagrada(9);

    return 0;
}