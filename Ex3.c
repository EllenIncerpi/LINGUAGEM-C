#include <stdio.h>
#include <limits.h> // Para INT_MAX e INT_MIN

void somaMaximaMinima(int valores[5]) {
    // Inicio - Soma Mínima e Máxima
    long long minSoma = LLONG_MAX;
    long long maxSoma = LLONG_MIN;
    long long totalSoma = 0;

    for (int i = 0; i < 5; i++) {
        totalSoma += valores[i];
    }

    for (int i = 0; i < 5; i++) {
        long long currentSoma = totalSoma - valores[i];
        if (currentSoma < minSoma) {
            minSoma = currentSoma;
        }
        if (currentSoma > maxSoma) {
            maxSoma = currentSoma;
        }
    }

    printf("%lld %lld\n", minSoma, maxSoma);
    // Fim - Soma Mínima e Máxima
}

int main() {

    int numeros[5];
    numeros[0] = 1;
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 4;
    numeros[4] = 5;
    somaMaximaMinima(numeros);

    printf("\n");

    numeros[0] = 7;
    numeros[1] = 3;
    numeros[2] = 9;
    numeros[3] = 12;
    numeros[4] = 5;
    somaMaximaMinima(numeros);

    printf("\n");

    numeros[0] = 8;
    numeros[1] = 8;
    numeros[2] = 8;
    numeros[3] = 8;
    numeros[4] = 1;
    somaMaximaMinima(numeros);

    printf("\n");

    return 0;
}