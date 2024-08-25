#include <stdio.h>

#define MAX_LINHAS 10
#define MAX_COLUNAS 10

// Função para criar a matriz transposta
void matrizTransposta(int matriz[][MAX_COLUNAS], int linhas, int colunas, int transposta[][MAX_LINHAS]) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j];
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
    int matriz[MAX_LINHAS][MAX_COLUNAS], transposta[MAX_COLUNAS][MAX_LINHAS];
    int linhas, colunas;

    // Entrada de dados da matriz
    printf("Digite o número de linhas e colunas da matriz: ");
    scanf("%d %d", &linhas, &colunas);

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula a matriz transposta
    matrizTransposta(matriz, linhas, colunas, transposta);

    // Imprime a matriz original
    printf("\nMatriz original:\n");
    imprimirMatriz(matriz, linhas, colunas);

    // Imprime a matriz transposta
    printf("\nMatriz transposta:\n");
    imprimirMatriz(transposta, colunas, linhas);

    return 0;
}

