#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int secreto, palpite;
    int tentativas = 0;


    srand((unsigned) time(NULL));
    secreto = (rand() % 50) + 1;

    printf("Jogo da adivinhacao! Tente acertar um numero entre 1 e 50.\n");

    
    do {
        printf("Digite seu palpite: ");
        if (scanf("%d", &palpite) != 1) {
            printf("Entrada invalida. Encerrando.\n");
            return 1;
        }
        tentativas++;

        if (palpite < secreto) {
            printf("Errado. O numero secreto e MAIOR que %d.\n", palpite);
        } else if (palpite > secreto) {
            printf("Errado. O numero secreto e MENOR que %d.\n", palpite);
        } else {
            printf("Parabens! Voce acertou em %d tentativas. O numero era %d.\n", tentativas, secreto);
        }
    } while (palpite != secreto);

    return 0;
}
