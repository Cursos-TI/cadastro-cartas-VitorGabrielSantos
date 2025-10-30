#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado[30];
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
};

int main() {
    struct Carta carta1, carta2;

    // === Cadastro da Carta 1 ===
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado (ex: RJ): ");
    fgets(carta1.estado, 30, stdin);
    carta1.estado[strcspn(carta1.estado, "\n")] = '\0'; // remove o \n do final

    printf("Digite o código da carta (ex: A01): ");
    fgets(carta1.codigo, 10, stdin);
    carta1.codigo[strcspn(carta1.codigo, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(carta1.nome, 50, stdin);
    carta1.nome[strcspn(carta1.nome, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    while (getchar() != '\n'); // limpa o buffer do teclado

    printf("Digite a área (em km²): ");
    scanf("%f", &carta1.area);
    while (getchar() != '\n');

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    while (getchar() != '\n');

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    while (getchar() != '\n');

    // Calcula a densidade populacional e PIB per capita da carta 1
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;

    printf("\n=== Cadastro da Carta 2 ===\n");

    // === Cadastro da Carta 2 ===
    printf("Digite o estado (ex: RJ): ");
    fgets(carta2.estado, 30, stdin);
    carta2.estado[strcspn(carta2.estado, "\n")] = '\0';

    printf("Digite o código da carta (ex: B02): ");
    fgets(carta2.codigo, 10, stdin);
    carta2.codigo[strcspn(carta2.codigo, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(carta2.nome, 50, stdin);
    carta2.nome[strcspn(carta2.nome, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    while (getchar() != '\n');

    printf("Digite a área (em km²): ");
    scanf("%f", &carta2.area);
    while (getchar() != '\n');

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    while (getchar() != '\n');

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    while (getchar() != '\n');

    // Calcula a densidade populacional e PIB per capita da carta 2
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    // === Comparação entre as cartas ===
    // Escolha do atributo para comparação (altere aqui para testar outro atributo)
    // Opções: populacao, area, pib, densidade_populacional, pib_per_capita
    printf("\n=== Comparação de Cartas ===\n");
    printf("Atributo escolhido: PIB per capita\n\n");

    // Compara o PIB per capita
    if (carta1.pib_per_capita > carta2.pib_per_capita) {
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nome, carta1.estado, carta1.pib_per_capita);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nome, carta2.estado, carta2.pib_per_capita);
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (carta2.pib_per_capita > carta1.pib_per_capita) {
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nome, carta1.estado, carta1.pib_per_capita);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nome, carta2.estado, carta2.pib_per_capita);
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("Carta 1 - %s (%s): %.2f\n", carta1.nome, carta1.estado, carta1.pib_per_capita);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.nome, carta2.estado, carta2.pib_per_capita);
        printf("Resultado: Empate!\n");
    }

    return 0;