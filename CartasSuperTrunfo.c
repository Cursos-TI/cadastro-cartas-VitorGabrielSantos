#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

    char estado;                // Letra identificadora do estado (A até H)
    char codigo[5];             // Código da carta (exemplo: A01, B03, etc.)
    char nomeCidade[50];        // Nome da cidade (permite até 49 caracteres + '\0')
    int populacao;              // População total da cidade
    float area;                 // Área da cidade em km²
    float pib;                  // Produto Interno Bruto (em bilhões)
    int pontosTuristicos;       // Quantidade de pontos turísticos na cidade

    // Cabeçalho inicial para indicar o início do cadastro
    printf("=== Cadastro de Carta Super Trunfo - Países ===\n\n");

    // Solicita ao usuário a letra do estado (A até H)
    // O espaço antes de %c serve para ignorar possíveis quebras de linha anteriores
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado);

    // Solicita o código da carta (exemplo: A01)
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo); // %s lê uma string (sem espaços)

    // Solicita o nome da cidade
    // %[^\n] permite ler uma string com espaços até o Enter ser pressionado
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade);

    // Solicita a população da cidade
    printf("Digite a população: ");
    scanf("%d", &populacao);

    // Solicita a área em km²
    printf("Digite a área em km²: ");
    scanf("%f", &area);

    // Solicita o PIB da cidade (em bilhões)
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib);

    // Solicita o número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibe os dados cadastrados de forma organizada e legível
    printf("\n=== Dados da Carta Cadastrada ===\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Cidade: %s\n", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    // Retorna 0 indicando que o programa terminou corretamente
    return 0;
}

