#include <stdio.h>
#include <stdlib.h>

#define NUM_PESSOAS 3

// Definindo a struct para armazenar dados de uma pessoa
typedef struct {
    char nome[50];
    int idade;
    float peso;
    float altura;
} Pessoa;

int main() {
    Pessoa pessoas[NUM_PESSOAS]; // Vetor de structs Pessoa

    // Coletando dados das pessoas
    for (int i = 0; i < NUM_PESSOAS; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        // Remover o caractere de nova linha se presente
        size_t len = strlen(pessoas[i].nome);
        if (len > 0 && pessoas[i].nome[len - 1] == '\n') {
            pessoas[i].nome[len - 1] = '\0';
        }

        printf("Digite a idade de %s: ", pessoas[i].nome);
        scanf("%d", &pessoas[i].idade);

        printf("Digite o peso de %s (em kg): ", pessoas[i].nome);
        scanf("%f", &pessoas[i].peso);

        printf("Digite a altura de %s (em metros): ", pessoas[i].nome);
        scanf("%f", &pessoas[i].altura);

        // Limpar o buffer do teclado
        while (getchar() != '\n');
    }

    // Imprimindo dados das pessoas
    printf("\nDados das pessoas:\n");
    for (int i = 0; i < NUM_PESSOAS; i++) {
        printf("\nPessoa %d\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d anos\n", pessoas[i].idade);
        printf("Peso: %.2f kg\n", pessoas[i].peso);
        printf("Altura: %.2f m\n", pessoas[i].altura);
    }

    return 0;
}

