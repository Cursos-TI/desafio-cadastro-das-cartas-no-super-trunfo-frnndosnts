#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main(){

  char estado[50], nome_da_cidade1[50], nome_da_cidade2[50], codigo_da_carta[50];
  int pontos_turisticos1, pontos_turisticos2, escolha;
  unsigned long int populacao1, populacao2;
  float area1, area2, pib1, pib2;
  float densidade1, densidade2, pibpercapita1, pibpercapita2;
  float super_poder1, super_poder2;


  // Utilizando do scanf para entrada de dados externos ao código, preenchendo informações das cartas.

    printf("Digite o Estado: \n");
    scanf("%s", &estado);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade1);
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
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
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
    scanf("%s", &nome_da_cidade2);
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
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf( "População: %u\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("Número PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capita: %.2f reais\n", pibpercapita2);
    printf("Super poder: %.2f\n", super_poder2);

// === Menu Interativo ===

printf ("Selecione o atributo que deseja comparar as cartar:\n");
printf ("1 - Nome dos dois países.\n");
printf ("2 - População.\n");
printf ("3 - Área.\n");
printf ("4 - PIB.\n");
printf ("5 - Número de Pontos Turísticos.\n");
printf ("6 - Densidade Demográfica.\n");
scanf ("%d\n", &escolha);

//=== Comparações ====

switch (escolha)
{
case 1:
  printf("O pais das cartas inserido é o: Brasil\n");
  break;

case 2:
  printf("Atributo: População.\n");
  printf("%s: %u\n", nome_da_cidade1, populacao1);
  printf("%s: %u\n", nome_da_cidade2, populacao2);

  if (populacao1 > populacao2)
  
    printf("Resultado: %s venceu!\n", nome_da_cidade1);

    else if (populacao2 > populacao1)
        printf("Resultado: %s venceu!\n", nome_da_cidade2);

    else

        printf("Resultado: Empate!\n");
  
  break;

case 3:
  printf("Atributo: Área\n");
  printf("%s: %.2f km²\n", nome_da_cidade1, area1);
  printf("%s: %.2f km²\n", nome_da_cidade2, area2);

if (area1 > area2)

    printf("Resultado: %s venceu!\n", nome_da_cidade1);

else if (area2 > area1)

    printf("Resultado: %s venceu!\n", nome_da_cidade2);

else
    printf("Resultado: Empate!\n");

  break;

case 4:
 printf("Atributo: PIB\n");
 printf("%s: %.2f bilhões\n", nome_da_cidade1, pib1);
 printf("%s: %.2f bilhões\n", nome_da_cidade2, pib2);

   if (pib1 > pib2)

      printf("Resultado: %s venceu!\n", nome_da_cidade1);

  else if (pib2 > pib1)

      printf("Resultado: %s venceu!\n", nome_da_cidade2);

  else

      printf("Resultado: Empate!\n");
  break;

case 5:
  printf("Atributo: Pontos Turísticos\n");
  printf("%s: %d\n", nome_da_cidade1, pontos_turisticos1);
  printf("%s: %d\n", nome_da_cidade2, pontos_turisticos2);

if (pontos_turisticos1 > pontos_turisticos2)

    printf("Resultado: %s venceu!\n", nome_da_cidade1);

else if (pontos_turisticos2 > pontos_turisticos1)

    printf("Resultado: %s venceu!\n", nome_da_cidade2);

else

    printf("Resultado: Empate!\n");

  break;

case 6:
  printf("Atributo: Densidade Demográfica\n");
  printf("%s: %.2f hab/km²\n", nome_da_cidade1, densidade1);
  printf("%s: %.2f hab/km²\n", nome_da_cidade2, densidade2);

if (densidade1 < densidade2)

    printf("Resultado: %s venceu!\n", nome_da_cidade1);

else if (densidade2 < densidade1)

    printf("Resultado: %s venceu!\n", nome_da_cidade2);

else

    printf("Resultado: Empate!\n");

  break;

default:
 printf("Opção inválida!\n");
  break;
}

    return 0;
}

