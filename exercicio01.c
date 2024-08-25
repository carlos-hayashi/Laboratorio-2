#include <stdio.h>

#define MAX 100  // Definindo um valor máximo para a dimensão da matriz

void encontrar_linha_com_menor_elemento(int matriz[MAX][MAX], int n, int *linha_com_menor) {
    int menor_valor = 0; // Inicializando com um valor grande
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] < menor_valor) {
                menor_valor = matriz[i][j];
                *linha_com_menor = i;
            }
        }
    }
}

int main() {
    int n;
    int matriz[MAX][MAX];
    int linha_com_menor;
    
    // Leitura do tamanho da matriz, deve ser informado somente um número, por se tratar de uma matriz quadrada
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &n);
    
    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Encontrar a linha com o menor elemento
    encontrar_linha_com_menor_elemento(matriz, n, &linha_com_menor);
    
    // Imprimir o número da linha com o menor elemento (baseado em 1)
    printf("A linha com o menor elemento é: %d\n", linha_com_menor + 1);
    
    return 0;
}
