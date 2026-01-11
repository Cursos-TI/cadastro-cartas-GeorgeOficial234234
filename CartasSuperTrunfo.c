#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // NÍVEL MESTRE
  
// VARIÁVEIS
  char state1, state2;
  char cardNumber1[2], cityName1[10];
  char cardNumber2[2], cityName2[10];
  unsigned long int population1, population2;
  int turisticPoints2, turisticPoints1;
  float areaKm1, pIB1, areaKm2, pIB2;
  float populationDensity1, populationDensity2;
  float pIBperCapita1, pIBperCapita2;

// CHAMADAS
    // PRIMEIRA CARTA

  printf("Insira uma LETRA (de 'A' a 'H') para estado:\n");
  scanf("%c", &state1);

  printf("\nInsira o CÓDIGO (de '1' a '4'):\n");
  scanf("%1s", cardNumber1); // %1s limita à apenas um dígito exibido no terminal

  printf("\nInsira o NOME da cidade:\n");
  scanf("%s", cityName1); // Em arrays já não é necessário o uso de '&'

  printf("\nInsira um valor de POPULAÇÃO:\n");
  scanf("%lu", &population1);

  printf("\nInsira um valor para ÁREA:\n");
  scanf("%f", &areaKm1);

  printf("\nInsira um valor para PIB:\n");
  scanf("%f", &pIB1);

  printf("\nInsira uma quantidade de PONTOS TURÍSTICOS:\n");
  scanf("%d", &turisticPoints1);

    // SEGUNDA CARTA

  printf("\nInsira uma LETRA (de 'A' a 'H') para estado:\n");
  scanf(" %c", &state2);

  printf("\nInsira o CÓDIGO (de '1' a '4'):\n");
  scanf("%1s", cardNumber2); // %1s limita à apenas um dígito exibido no terminal

  printf("\nInsira o NOME da cidade:\n");
  scanf("%s", cityName2); // Em arrays já não é necessário o uso de '&'

  printf("\nInsira um valor de POPULAÇÃO:\n");
  scanf("%lu", &population2);

  printf("\nInsira um valor para ÁREA:\n");
  scanf("%f", &areaKm2);

  printf("\nInsira um valor para PIB:\n");
  scanf("%f", &pIB2);

  printf("\nInsira uma quantidade de PONTOS TURÍSTICOS:\n");
  scanf("%d", &turisticPoints2);

// TERMINAL 

    // PRIMEIRA CARTA
  printf("\nPRIMEIRA CARTA:\n");
  printf("\nEstado: %c \n", state1);
  printf("Código da Carta: %c0%s \n", state1, cardNumber1);
  printf("Nome da Cidade: %s \n", cityName1);
  printf("População: %lu \n", population1);
  printf("Área (em km²): %f \n", areaKm1);
  printf("PIB: %f \n", pIB1);
  printf("Número de Pontos Turísticos: %d \n", turisticPoints1);
    // SEGUNDA CARTA
  printf("\nSEGUNDA CARTA:\n");
  printf("\nEstado: %c \n", state2);
  printf("Código da Carta: %c0%s \n", state2, cardNumber2);
  printf("Nome da Cidade: %s \n", cityName2);
  printf("População: %lu \n", population2);
  printf("Área (em km²): %f \n", areaKm2);
  printf("PIB: %f \n", pIB2);
  printf("Número de Pontos Turísticos: %d \n", turisticPoints2);

  // PRIMEIRA CARTA
  populationDensity1 = (float) population1 / areaKm1;
  pIBperCapita1 = (float) pIB1 / population1;
  float superPoder1 = (float) population1 + areaKm1 + pIB1 + turisticPoints1 + pIBperCapita1 + (1.0f/populationDensity1);
  // SEGUNDA CARTA
  populationDensity2 = (float) population2 / areaKm2;
  pIBperCapita2 = (float) pIB2 / population2;
  float superPoder2 = (float) population2 + areaKm2 + pIB2 + turisticPoints2 + pIBperCapita2 + (1.0f/populationDensity2);

  printf("\nCOMPARAÇÃO\n");
  printf("\nPrimeira Carta:\n");
  printf("Densidade Populacional: %.2f \n", populationDensity1);
  printf("PIB per Capita: %.2f \n", pIBperCapita1);

  printf("\nSegunda Carta:\n");
  printf("Densidade Populacional: %.2f \n", populationDensity2);
  printf("PIB per Capita: %.2f \n", pIBperCapita2);

  int popRes = population1 > population2;
  int turisRes = turisticPoints1 > turisticPoints2;
  int areaRes = areaKm1 > areaKm2;
  int pibRes = pIB1 > pIB2;
  int popDensiRes = populationDensity1 < populationDensity2;
  int PbPcRes = pIBperCapita1 > pIBperCapita2;

  printf("\nRESULTADO\n");
  printf("População: Carta %d venceu (%d)\n", popRes ? 1:2, popRes);
  printf("Área: Carta %d venceu (%d)\n", areaRes ? 1:2, areaRes);
  printf("PIB: Carta %d venceu (%d)\n", pibRes ? 1:2, pibRes);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", turisRes ? 1:2, turisRes);
  printf("Densidade Populacional: Carta %d venceu (%d)\n", popDensiRes ? 1:2, popDensiRes);
  printf("PIB per Capita: Carta %d venceu (%d)\n", PbPcRes ? 1:2, PbPcRes);

return 0;
} 
