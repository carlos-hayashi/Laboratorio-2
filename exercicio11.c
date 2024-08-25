#include <stdio.h>

#define MAX_LINHAS 10
#define MAX_COLUNAS 10

// Função para somar os elementos das linhas L1 e L2 e armazenar o resultado na linha L2
void somarLinhas(int matriz[][MAX_COLUNAS], int L1, int L2, int colunas) {
    for (int j = 0; j < colunas; j++) {
        matriz[L2][j] = matriz[L1][j] + matriz[L2][j];
    }
}

// Função para multiplicar os elementos das linhas L1 e L2 e armazenar o resultado na linha L2
void multiplicarLinhas(int matriz[][MAX_COLUNAS], int L1, int L2, int colunas) {
    for (int j = 0; j < colunas; j++) {
        matriz[L2][j] = matriz[L1][j] * matriz[L2][j];
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
    int L1, L2;

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

    // Exibindo a matriz original
    printf("\nMatriz original:\n");
    imprimirMatriz(matriz, linhas, colunas);

    // Somar as linhas L1 e L2
    printf("\nDigite o número da linha L1 (0 a %d): ", linhas - 1);
    scanf("%d", &L1);
    printf("Digite o número da linha L2 (0 a %d): ", linhas - 1);
    scanf("%d", &L2);

    if (L1 >= 0 && L1 < linhas && L2 >= 0 && L2 < linhas) {
        somarLinhas(matriz, L1, L2, colunas);
        printf("\nMatriz após somar a linha %d com a linha %d e armazenar o resultado na linha %d:\n", L1, L1, L2);
        imprimirMatriz(matriz, linhas, colunas);
    } else {
        printf("Número das linhas inválido.\n");
    }

    // Multiplicar as linhas L1 e L2
    printf("\nDigite o número da linha L1 (0 a %d): ", linhas - 1);
    scanf("%d", &L1);
    printf("Digite o número da linha L2 (0 a %d): ", linhas - 1);
    scanf("%d", &L2);

    if (L1 >= 0 && L1 < linhas && L2 >= 0 && L2 < linhas) {
        multiplicarLinhas(matriz, L1, L2, colunas);
        printf("\nMatriz após multiplicar a linha %d com a linha %d e armazenar o resultado na linha %d:\n", L1, L1, L2);
        imprimirMatriz(matriz, linhas, colunas);
    } else {
        printf("Número das linhas inválido.\n");
    }

    return 0;
}

