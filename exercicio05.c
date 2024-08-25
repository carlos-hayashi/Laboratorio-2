#include <stdio.h>

#define MAX 100

void multiplicarLinha(int matriz[MAX][MAX], int linhas, int colunas, int linha, int multiplicador) {
    for (int j = 0; j < colunas; j++) {
        matriz[linha][j] *= multiplicador;
    }
}

void multiplicarColuna(int matriz[MAX][MAX], int linhas, int colunas, int coluna, int multiplicador) {
    for (int i = 0; i < linhas; i++) {
        matriz[i][coluna] *= multiplicador;
    }
}

void imprimirMatriz(int matriz[MAX][MAX], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[MAX][MAX];
    int linhas, colunas;
    
    printf("Digite o número de linhas e colunas da matriz: ");
    scanf("%d %d", &linhas, &colunas);

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int escolha, index, multiplicador;
    
    printf("Deseja multiplicar (1) uma linha ou (2) uma coluna? ");
    scanf("%d", &escolha);
    
    if (escolha == 1) {
        printf("Digite o índice da linha a ser multiplicada (0 a %d): ", linhas - 1);
        scanf("%d", &index);
        printf("Digite o multiplicador: ");
        scanf("%d", &multiplicador);
        multiplicarLinha(matriz, linhas, colunas, index, multiplicador);
    } else if (escolha == 2) {
        printf("Digite o índice da coluna a ser multiplicada (0 a %d): ", colunas - 1);
        scanf("%d", &index);
        printf("Digite o multiplicador: ");
        scanf("%d", &multiplicador);
        multiplicarColuna(matriz, linhas, colunas, index, multiplicador);
    } else {
        printf("Escolha inválida.\n");
        return 1;
    }

    printf("Matriz resultante:\n");
    imprimirMatriz(matriz, linhas, colunas);

    return 0;
}
