#include <stdio.h>

// Programa: Super Trunfo - Países (Nível Mestre)
// Objetivo: Cadastrar 2 cartas, calcular densidade populacional, PIB per capita,
// e o Super Poder, comparando os resultados entre elas.

// Autor: [Seu Nome]
// Data: [Data de entrega]

// Estrutura de dados que representa uma carta do jogo
struct Carta {
    char estado;                  // Letra do estado (A-H)
    char codigo[4];               // Código da carta (ex: A01)
    char nomeCidade[50];          // Nome da cidade
    unsigned long int populacao;  // População (número grande, por isso unsigned long int)
    float area;                   // Área em km²
    float pib;                    // PIB em bilhões de reais
    int pontosTuristicos;         // Quantidade de pontos turísticos
    float densidadePopulacional;  // Habitantes por km²
    float pibPerCapita;           // PIB dividido pela população
    float superPoder;             // Soma dos atributos numéricos (ver regra)
};

int main() {
    struct Carta carta1, carta2;

    printf("=== Cadastro de Cartas Super Trunfo - Nivel Mestre ===\n");

    // ===== Cadastro da Carta 1 =====
    printf("\n--- Carta 1 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);
    printf("Digite a população: ");
    scanf("%lu", &carta1.populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos da carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao; // PIB convertido para reais
    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib +
                        carta1.pontosTuristicos + carta1.pibPerCapita +
                        (1 / carta1.densidadePopulacional); // menor densidade => mais poder

    // ===== Cadastro da Carta 2 =====
    printf("\n--- Carta 2 ---\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("Digite a população: ");
    scanf("%lu", &carta2.populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos da carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;
    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib +
                        carta2.pontosTuristicos + carta2.pibPerCapita +
                        (1 / carta2.densidadePopulacional);

    // ===== Exibição das cartas =====
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    // ===== Comparações =====
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Área: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.pontosTuristicos > carta2.pontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1.densidadePopulacional < carta2.densidadePopulacional); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pibPerCapita > carta2.pibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.superPoder > carta2.superPoder);

    return 0;
}