#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main(){

    char estado [50], nome_da_cidade [50], codigo_da_carta [50];
    int populacao, pontos_turisticos;
    float area, pib, densidade_populacional, pib_per_capita;


  // Utilizando do scanf para entrada de dados externos ao código, preenchendo informações das cartas.

    printf("Digite o Estado: \n");
    scanf("%s", &estado);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_da_carta);
    printf("Digite o número da população: \n");
    scanf("%d", &populacao);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);
    printf("Digite a área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);

  //calcular densidade populacional e pib per capita.
    densidade_populacional = (float)(populacao / area);
    pib_per_capita = (float)(pib / populacao);

  // Imprimir as informações com o printf.

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf( "População: %d\n", populacao);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Área: %.2f km²\n ", area);
    printf("Número PIB: %.2f bilhões de reais\n ", pib);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB Per Capita: %.2f reais\n", pib_per_capita);

  // Preenchendo os dados da próxima carta.

  printf("Digite o Estado: \n");
    scanf("%s", &estado);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_da_carta);
    printf("Digite o número da população: \n");
    scanf("%d", &populacao);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);
    printf("Digite a área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    densidade_populacional = (float)(populacao / area);
    pib_per_capita = (float)(pib / populacao);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf( "População: %d\n", populacao);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Área: %.2f km²\n", area);
    printf("Número PIB: %.2f bilhões de reais\n", pib);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB Per Capita: %.2f reais\n", pib_per_capita);

    return 0;
}

