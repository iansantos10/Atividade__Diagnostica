#include <stdio.h>

int main() {
    int N, i;
    int soma = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        soma += i * i;
    }

    printf("A soma dos quadrados dos primeiros %d numeros = %d\n", N, soma);
    return 0;
}
