#include <stdio.h>

#define MAX_LINHAS 10
#define MAX_COLUNAS 10

// Fun��o para multiplicar uma linha de uma matriz por um dado n�mero
void multiplicarLinha(int matriz[][MAX_COLUNAS], int linha, int colunas, int multiplicador) {
    for (int j = 0; j < colunas; j++) {
        matriz[linha][j] *= multiplicador;
    }
}

// Fun��o para multiplicar uma coluna de uma matriz por um dado n�mero
void multiplicarColuna(int matriz[][MAX_COLUNAS], int linha, int linhas, int multiplicador) {
    for (int i = 0; i < linhas; i++) {
        matriz[i][linha] *= multiplicador;
    }
}

// Fun��o para imprimir uma matriz
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
    int linha, coluna, multiplicador;

    // Entrada de dados da matriz
    printf("Digite o n�mero de linhas e colunas da matriz: ");
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

    // Multiplicando uma linha por um n�mero
    printf("\nDigite o n�mero da linha a ser multiplicada (0 a %d): ", linhas - 1);
    scanf("%d", &linha);
    printf("Digite o multiplicador: ");
    scanf("%d", &multiplicador);

    if (linha >= 0 && linha < linhas) {
        multiplicarLinha(matriz, linha, colunas, multiplicador);
        printf("\nMatriz ap�s multiplicar a linha %d por %d:\n", linha, multiplicador);
        imprimirMatriz(matriz, linhas, colunas);
    } else {
        printf("N�mero da linha inv�lido.\n");
    }

    // Multiplicando uma coluna por um n�mero
    printf("\nDigite o n�mero da coluna a ser multiplicada (0 a %d): ", colunas - 1);
    scanf("%d", &coluna);
    printf("Digite o multiplicador: ");
    scanf("%d", &multiplicador);

    if (coluna >= 0 && coluna < colunas) {
        multiplicarColuna(matriz, coluna, linhas, multiplicador);
        printf("\nMatriz ap�s multiplicar a coluna %d por %d:\n", coluna, multiplicador);
        imprimirMatriz(matriz, linhas, colunas);
    } else {
        printf("N�mero da coluna inv�lido.\n");
    }

    return 0;
}

