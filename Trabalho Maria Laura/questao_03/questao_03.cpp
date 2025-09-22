#include <stdio.h>

int main() {
    int valor, soma = 0;
    int jogadas = 0;

    printf("O jogo vai continuar ate que a soma seja pelo menos 20.\n");

    while (soma < 20) {
        printf("Digite o valor do dado: ");
        scanf("%d", &valor);

        soma = soma + valor;
        jogadas++;

        printf("Jogada %d: valor = %d | soma = %d\n", jogadas, valor, soma);
    }

    printf("Fim do jogo! Foram %d jogadas e a soma final foi %d.\n", jogadas, soma);

    return 0;
}
