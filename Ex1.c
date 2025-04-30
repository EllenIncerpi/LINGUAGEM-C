#include <stdio.h>

void comparandoPontuacoes(int pontosAlice[3], int pontosBob[3]) {
    // Inicio 
    int pontoAlice = 0;
    int pontoBob = 0;

    // Comparando as pontuações
    for (int i = 0; i < 3; i++) {
        if (pontosAlice[i] > pontosBob[i]) {
            pontoAlice++;
        } else if (pontosBob[i] > pontosAlice[i]) {
            pontoBob++;
        }
    }

    // Exibir a pontuacao de Alice e Bob
    printf("%d , %d\n", pontoAlice, pontoBob);

    // Fim -  Determinar quem ganhou
    if (pontoAlice > pontoBob) {
        printf("Alice ganhou\n");
    } else if (pontoAlice < pontoBob) {
        printf("Bob ganhou\n");
    } else {
        printf("Empatou\n");
    }
}

int main() {
    int pontosAlice[] = {5, 6, 7};   
    int pontosBob[] = {3, 6, 10};     

    comparandoPontuacoes(pontosAlice, pontosBob);
    
	
	printf("\n"); 

    int pontosA[3]; // Array pontosA
    pontosA[0] = 1;
    pontosA[1] = 2;
    pontosA[2] = 3;

    int pontosB[3]; // Array pontosB
    pontosB[0] = 3;
    pontosB[1] = 2;
    pontosB[2] = 1;
    comparandoPontuacoes(pontosA, pontosB);


    printf("\n"); 

    pontosA[0] = 11;
    pontosA[1] = 22;
    pontosA[2] = 33;

    pontosB[0] = 33;
    pontosB[1] = 23;
    pontosB[2] = 11;
    comparandoPontuacoes(pontosA, pontosB);

    printf("\n\n");

    return 0;
}