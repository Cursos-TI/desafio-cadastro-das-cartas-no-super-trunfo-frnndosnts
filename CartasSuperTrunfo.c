#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main(){

    char estado [50], nome_da_cidade [50], codigo_da_carta [50];
    int pontos_turisticos;
    unsigned long int populacao;
    float area, pib, densidade_populacional, pib_per_capita, super_poder;
    int ResultadoA , ResultadoB, ResultadoC, ResultadoD, ResultadoE , ResultadoF, ResultadoG;


  // Utilizando do scanf para entrada de dados externos ao código, preenchendo informações das cartas.

    printf("Digite o Estado: \n");
    scanf("%s", &estado);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_da_carta);
    printf("Digite o número da população: \n");
    scanf("%u", &populacao);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);
    printf("Digite a área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);

  //calcular densidade populacional e pib per capita.
    densidade_populacional = (float)(populacao / area);
    pib_per_capita = (float)(pib / populacao);
    super_poder = (float)(populacao + area + pib + pontos_turisticos + pib_per_capita + (1 / densidade_populacional));

  // Imprimir as informações com o printf.

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf( "População: %u\n", populacao);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Área: %.2f km²\n ", area);
    printf("Número PIB: %.2f bilhões de reais\n ", pib);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB Per Capita: %.2f reais\n", pib_per_capita);
    printf("Super poder: %.2f\n", super_poder);

  // Preenchendo os dados da próxima carta.

  printf("Digite o Estado: \n");
    scanf("%s", &estado);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_da_carta);
    printf("Digite o número da população: \n");
    scanf("%u", &populacao);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);
    printf("Digite a área: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    densidade_populacional = (float)(populacao / area);
    pib_per_capita = (float)(pib / populacao);
    super_poder = (float)(populacao + area + pib + pontos_turisticos + pib_per_capita + (1 / densidade_populacional));


    printf("Carta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf( "População: %u\n", populacao);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Área: %.2f km²\n", area);
    printf("Número PIB: %.2f bilhões de reais\n", pib);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB Per Capita: %.2f reais\n", pib_per_capita);
    printf("Super poder: %.2f\n", super_poder);

  // Compare as duas cartas.
    ResultadoA = populacao > populacao;
    ResultadoB = pontos_turisticos > pontos_turisticos;
    ResultadoC = area > area;
    ResultadoD =  pib > pib;
    ResultadoE = densidade_populacional < densidade_populacional;
    ResultadoF = pib_per_capita > pib_per_capita;
    ResultadoG = super_poder > super_poder;
       
    printf( "Comparação de Cartas:\n");
    printf("População: Carta %d venceu\n", ResultadoA);
    printf("Área: Carta %d venceu\n", ResultadoC);
    printf("PIB: Carta %d venceu\n", ResultadoD);
    printf("Pontos Turísticos: Carta %d venceu\n", ResultadoB);
    printf("Densidade populacional: Carta %d venceu\n", ResultadoE);
    printf("PIB Per Capita: Carta %d venceu\n", ResultadoF);
    printf("Super Poder: Carta %d venceu\n", ResultadoG);

    return 0;
}

