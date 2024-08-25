#include <stdio.h>
#include <string.h>

// Função para remover um caractere da string na posição especificada
void removerCaractere(char *str, int pos) {
    int len = strlen(str);

    // Verifica se a posição é válida
    if (pos < 0 || pos >= len) {
        printf("Posicao invalida.\n");
        return;
    }

    // Desloca os caracteres à direita da posição para a esquerda
    for (int i = pos; i < len - 1; i++) {
        str[i] = str[i + 1];
    }

    // Adiciona o caractere nulo no final da string
    str[len - 1] = '\0';
}

int main() {
    char str[100];
    int posicao;

    // Entrada de dados
    printf("Digite uma string (maximo 99 caracteres): ");
    fgets(str, sizeof(str), stdin);

    // Remove o caractere de nova linha, se presente
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Digite a posicao do caractere a ser removido: ");
    scanf("%d", &posicao);

    // Remove o caractere da string
    removerCaractere(str, posicao);

    // Exibe a string resultante
    printf("String apos remocao do caractere: \"%s\"\n", str);

    return 0;
}

