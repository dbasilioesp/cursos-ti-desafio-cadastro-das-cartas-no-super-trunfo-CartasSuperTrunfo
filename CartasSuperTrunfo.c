#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigo[3];
    char nome[20];
    int populacao, pontos_turisticos;
    float area, pib;
    float densidade_populacional, pib_percapita;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo);

    printf("Digite nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite o numero da populacao: \n");
    scanf("%d", &populacao);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("Digite a area (km2): \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    // Calculos
    densidade_populacional = (float) populacao / area;
    pib_percapita = (float) pib / populacao;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n");
    printf("Codigo da cidade: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("Numero da populacao: %d \n", populacao);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos);
    printf("Area: %.2f km2 \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Densidade Populacional: %.2f habitantes / km2\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_percapita);
    printf("\n");

    return 0;
}
