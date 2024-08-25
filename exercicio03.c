#include <stdio.h>

void gerarPadroes(int numeroMaximo) {
    for (int i = 1; i <= (numeroMaximo + 1) / 2; i++) {
        // Calcula o deslocamento para a linha atual
        for (int j = 1; j < i; j++) {
            printf("   ");
        }

        // Imprime a linha com os números apropriados
        for (int k = i; k <= numeroMaximo - i + 1; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
}

int main() {
    int numeroMaximo;

    while (1) {
        printf("Digite um número máximo ímpar: ");
        scanf("%d", &numeroMaximo);

        // Verifica se o número é ímpar
        if (numeroMaximo % 2 != 0) {
            gerarPadroes(numeroMaximo);
            break;
        } else {
            printf("O número deve ser ímpar. Tente novamente.\n");
        }
    }

    return 0;
}
