#include <stdio.h>

int main() {
    float N1, N2, N3, ME, MA;

    // Leitura das notas e média dos exercícios
    printf("Digite a nota 1: ");
    scanf("%f", &N1);
    
    printf("Digite a nota 2: ");
    scanf("%f", &N2);
    
    printf("Digite a nota 3: ");
    scanf("%f", &N3);
    
    printf("Digite a média dos exercícios: ");
    scanf("%f", &ME);
    
    // Cálculo da média de aproveitamento
    MA = (N1 + N2*2 + N3*3 + ME) / 7;
    
    // Determinar e exibir o conceito
    if (MA >= 9.0) {
        printf("Média de Aproveitamento: %.2f\n", MA);
        printf("Conceito: A\n");
    } else if (MA >= 7.0) {
        printf("Média de Aproveitamento: %.2f\n", MA);
        printf("Conceito: B\n");
    } else if (MA >= 5.0) {
        printf("Média de Aproveitamento: %.2f\n", MA);
        printf("Conceito: C\n");
    } else if (MA >= 3.0) {
        printf("Média de Aproveitamento: %.2f\n", MA);
        printf("Conceito: D\n");
    } else {
        printf("Média de Aproveitamento: %.2f\n", MA);
        printf("Conceito: E\n");
    }
    
    return 0;
}

