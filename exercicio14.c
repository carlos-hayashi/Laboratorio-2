#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

// Função para inserir um caractere na string na posição especificada
void inserirCaractere(char *str, char caractere, int pos) {
    int len = strlen(str);

    // Verifica se a posição é válida
    if (pos < 0 || pos > len) {
        printf("Posicao invalida.\n");
        return;
    }

    // Verifica se há espaço suficiente na string
    if (len >= MAX_LEN - 1) {
        printf("A string esta cheia. Nao e possivel inserir o caractere.\n");
        return;
    }

    // Desloca os caracteres à direita da posição para a direita
    for (int i = len; i >= pos; i--) {
        str[i + 1] = str[i];
    }

    // Insere o novo caractere na posição especificada
    str[pos] = caractere;

    // Adiciona o caractere nulo no final da string
    str[len + 1] = '\0';
}

int main() {
    char str[MAX_LEN];
    char caractere;
    int posicao;

    // Entrada de dados
    printf("Digite uma string (maximo 99 caracteres): ");
    fgets(str, sizeof(str), stdin);

    // Remove o caractere de nova linha, se presente
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Digite o caractere a ser inserido: ");
    scanf(" %c", &caractere);  // O espaço antes de %c é importante para ignorar o caractere de nova linha residual

    printf("Digite a posicao na qual o caractere deve ser inserido: ");
    scanf("%d", &posicao);

    // Insere o caractere na string
    inserirCaractere(str, caractere, posicao);

    // Exibe a string resultante
    printf("String apos insercao do caractere: \"%s\"\n", str);

    return 0;
}

