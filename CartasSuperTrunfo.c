#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main(){

  char estado[50], nome_da_cidade[50], codigo_da_carta[50];
  int pontos_turisticos1, pontos_turisticos2;
  unsigned long int populacao1, populacao2;
  float area1, area2, pib1, pib2;
  float densidade1, densidade2, pibpercapita1, pibpercapita2;
  float super_poder1, super_poder2;

  int ResultadoA, ResultadoB, ResultadoC, ResultadoD, ResultadoE, ResultadoF, ResultadoG;

  // Utilizando do scanf para entrada de dados externos ao código, preenchendo informações das cartas.

    printf("Digite o Estado: \n");
    scanf("%s", &estado);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_da_carta);
    printf("Digite o número da população: \n");
    scanf("%u", &populacao1);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);
    printf("Digite a área: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

  //calcular densidade populacional e pib per capita.
  densidade1 = populacao1 / area1;
  pibpercapita1 = pib1 / populacao1;
  super_poder1 = (float)(populacao1 + area1 + pib1 + pontos_turisticos1 + pibpercapita1 + (1 / densidade1));

  // Imprimir as informações com o printf.

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf( "População: %u\n", populacao1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Área: %.2f km²\n", area1);
    printf("Número PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Populacional: %.2F hab/km²\n", densidade1);
    printf("PIB Per Capita: %.2f reais\n", pibpercapita1);
    printf("Super poder: %.2f\n", super_poder1);

  // Preenchendo os dados da próxima carta.

    printf("Insira os dados da próxima carta:\n");
    printf("Digite o Estado: \n");
    scanf("%s", &estado);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade);
    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_da_carta);
    printf("Digite o número da população: \n");
    scanf("%u", &populacao2);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);
    printf("Digite a área: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pibpercapita2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    super_poder2 = (float)(populacao2 + area2 + pib2 + pontos_turisticos2 + pibpercapita2 + (1 / densidade2));


    printf("Carta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf( "População: %u\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("Número PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capita: %.2f reais\n", pibpercapita2);
    printf("Super poder: %.2f\n", super_poder2);

// === Comparações ===
    ResultadoA = (populacao1 > populacao2) ? 1 : 0;
    ResultadoB = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
    ResultadoC = (area1 > area2) ? 1 : 0;
    ResultadoD = (pib1 > pib2) ? 1 : 0;
    ResultadoE = (densidade1 < densidade2) ? 1 : 0; // MENOR vence
    ResultadoF = (pibpercapita1 > pibpercapita2) ? 1 : 0;
    ResultadoG = (super_poder1 > super_poder2) ? 1 : 0;

// === Resultados das Comparações ===
    printf("Resultados das Comparaçõe\n");
    printf("População (maior vence): Resultado = %d\n", ResultadoA);
    printf("Pontos Turísticos (maior vence): Resultado = %d\n", ResultadoB);
    printf("Área (maior vence): Resultado = %d\n", ResultadoC);
    printf("PIB (maior vence): Resultado = %d\n", ResultadoD);
    printf("Densidade Populacional (MENOR vence): Resultado = %d\n", ResultadoE);
    printf("PIB Per Capita (maior vence): Resultado = %d\n", ResultadoF);
    printf("Super Poder (maior vence): Resultado = %d\n", ResultadoG);

    return 0;
}

