#include <stdio.h>

// Função para encontrar a posição do primeiro caractere em uma string
int encontrarPosicaoChar(const char *str, char caractere) {
    // Percorre a string caractere por caractere
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == caractere) {
            return i; // Retorna a posição do caractere
        }
    }
    return -1; // Retorna -1 se o caractere não for encontrado
}

int main() {
    char str[100];
    char caractere;
    int posicao;

    // Entrada de dados
    printf("Digite uma string (maximo 99 caracteres): ");
    fgets(str, sizeof(str), stdin);

    // Remove o caractere de nova linha se presente
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Digite o caractere a ser encontrado: ");
    scanf("%c", &caractere);

    // Encontrar a posição do caractere
    posicao = encontrarPosicaoChar(str, caractere);

    // Exibir o resultado
    if (posicao != -1) {
        printf("O caractere '%c' foi encontrado na posicao %d.\n", caractere, posicao);
    } else {
        printf("O caractere '%c' nao foi encontrado na string.\n", caractere);
    }

    return 0;
}

