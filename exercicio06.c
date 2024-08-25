#include <stdio.h>

#define MAX 100  // Definindo o tamanho máximo da matriz

void lerMatriz(int matriz[MAX][MAX], int linhas, int colunas) {
    printf("Digite os elementos da matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int matriz[MAX][MAX], int linhas, int colunas) {
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void calcularTransposta(int matriz[MAX][MAX], int transposta[MAX][MAX], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

void imprimirTransposta(int transposta[MAX][MAX], int linhas, int colunas) {
    printf("Matriz Transposta:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[MAX][MAX], transposta[MAX][MAX];
    int linhas, colunas;

    // Lendo as dimensões da matriz
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    // Verificando se as dimensões são válidas
    if (linhas <= 0 || colunas <= 0 || linhas > MAX || colunas > MAX) {
        printf("Número de linhas ou colunas inválido.\n");
        return 1;
    }

    // Lendo a matriz
    lerMatriz(matriz, linhas, colunas);

    // Calculando a matriz transposta
    calcularTransposta(matriz, transposta, linhas, colunas);

    // Imprimindo a matriz original
    imprimirMatriz(matriz, linhas, colunas);

    // Imprimindo a matriz transposta
    imprimirTransposta(transposta, linhas, colunas);

    return 0;
}

