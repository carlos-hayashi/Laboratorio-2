#include <stdio.h>
#include <string.h>

int main() {
    char nome1[100], nome2[100];

    // Leitura dos nomes
    printf("Digite o primeiro nome: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // Remove a nova linha final

    printf("Digite o segundo nome: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; // Remove a nova linha final

    // Comparação e impressão em ordem alfabética
    if (strcmp(nome1, nome2) < 0) {
        printf("%s\n%s\n", nome1, nome2);
    } else {
        printf("%s\n%s\n", nome2, nome1);
    }

    return 0;
}
