#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // NÍVEL NOVATO
  
// VARIÁVEIS
  char state;
  char cardNumber[2];
  char cityName[10];
  int population;
  float areaKm;
  float pIB;
  int turisticPoints;

// CHAMADAS
  printf("Insira uma LETRA (de 'A' a 'H') para estado:\n");
  scanf("%c", &state);

  printf("\nInsira o CÓDIGO (de '1' a '4'):\n");
  scanf("%1s", cardNumber); // %1s limita à apenas um dígito exibido no terminal

  printf("\nInsira o NOME da cidade:\n");
  scanf("%s", cityName); // Em arrays já não é necessário o uso de '&'

  printf("\nInsira um valor de POPULAÇÃO:\n");
  scanf("%d", &population);

  printf("\nInsira um valor para ÁREA:\n");
  scanf("%f", &areaKm);

  printf("\nInsira um valor para PIB:\n");
  scanf("%f", &pIB);

  printf("\nInsira uma quantidade de PONTOS TURÍSTICOS:\n");
  scanf("%d", &turisticPoints);

// TERMINAL 
  printf("\nEstado: %c \n", state);
  printf("Código da Carta: %c0%s \n", state, cardNumber);
  printf("Nome da Cidade: %s \n", cityName);
  printf("População: %d \n", population);
  printf("Área (em km²): %f \n", areaKm);
  printf("PIB: %f \n", pIB);
  printf("Número de Pontos Turísticos: %d \n", turisticPoints);

return 0;
} 
