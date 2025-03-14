#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main(){

    char estado [20];
    char nome_da_cidade [20];
    char codigo_da_carta [20];
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;

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

  // Imprimir as informações com o printf.

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf( "População: %d\n", populacao);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Área: %f\n", area);
    printf("Número PIB: %f\n", pib);

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

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf( "População: %d\n", populacao);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Área: %f\n", area);
    printf("Número PIB: %f\n", pib);

    return 0;
}

