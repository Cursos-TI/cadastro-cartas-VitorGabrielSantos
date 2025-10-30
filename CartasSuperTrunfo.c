#include <stdio.h> // Biblioteca padrão de entrada e saída (printf e scanf)

int main() {
    // === Declaração das variáveis da Carta 1 ===
    char estado1;                  // Letra do estado (A-H)
    char codigo1[5];               // Código da carta (ex: A01)
    char nomeCidade1[50];          // Nome da cidade
    int populacao1;                // População total da cidade
    float area1;                   // Área total em km²
    float pib1;                    // PIB total em bilhões de reais
    int pontosTuristicos1;         // Quantidade de pontos turísticos
    float densidade1;              // Densidade populacional (habitantes por km²)
    float pibPerCapita1;           // PIB per capita (PIB dividido pela população)

    // === Declaração das variáveis da Carta 2 ===
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // === Entrada de dados da Carta 1 ===
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // === Entrada de dados da Carta 2 ===
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // === Cálculos matemáticos ===
    // Densidade populacional = população / área
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // PIB per capita = (PIB * 1.000.000.000) / população
    // Multiplica por 1 bilhão porque o PIB foi informado em bilhões de reais
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // === Exibição dos dados da Carta 1 ===
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // === Exibição dos dados da Carta 2 ===
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Fim do programa
    return 0;
}