#include <stdio.h>
#include <stdlib.h> // Para a função abs()

#define MAX_LINHAS 10
#define MAX_COLUNAS 10

// Função para substituir todos os números negativos pela sua módulo
void substituirNegativosPorModulo(int matriz[][MAX_COLUNAS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] < 0) {
                matriz[i][j] = abs(matriz[i][j]);
            }
        }
    }
}

// Função para imprimir uma matriz
void imprimirMatriz(int matriz[][MAX_COLUNAS], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int linhas, colunas;

    // Entrada de dados da matriz
    printf("Digite o numero de linhas e colunas da matriz: ");
    scanf("%d %d", &linhas, &colunas);

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Substitui negativos por seus módulos
    substituirNegativosPorModulo(matriz, linhas, colunas);

    // Imprime a matriz resultante
    printf("\nMatriz apos substituicao dos negativos:\n");
    imprimirMatriz(matriz, linhas, colunas);

    return 0;
}

