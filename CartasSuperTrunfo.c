#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

//Carta 1:

char Estado [2];
char Codigo [25];
char cidade [55];
int População;
float Área;
float PIB;
int NPT;

//Carta 2:

char estado2[3];
char Codigo2[25];
char cidade2[55];
int População2;
float Área2;
float PIB2;
int NPT2;

// Área para entrada de dados

  printf("DIGITE OS VALORES DAS CARTAS\n\n\n\n");

  printf("CARTA NUMERO 1:\n\n\n");

//DADOS DE ENTRADA DA CARTA 1
  printf("digite o estado:\n\n");
  scanf("%s", &Estado);

  printf("codigo da carta:\n\n");
  scanf("%s", Codigo);

  printf("digite a cidade:\n\n");
  scanf("%s", cidade);

  printf("digite a populaçao:\n\n");
  scanf("%d", &População);

  printf("digite a area da cidade:\n\n");
  scanf("%f", &Área);

  printf("qual o PIB:\n\n");
  scanf("%f", &PIB);

  printf("quantos pontos turisticos possui:\n\n");
  scanf("%d", &NPT);

  printf("CARTA NUMERO 2:\n\n\n");

//DADOS DE ENTRADA DA CARTA 2

  printf("digite o estado:\n\n");
  scanf("%s", &estado2);

  printf("codigo da carta:\n\n");
  scanf("%s", Codigo2);

  printf("digite a cidade:\n\n");
  scanf("%s", cidade2);

  printf("digite a populaçao:\n\n");
  scanf("%d", &População2);

  printf("digite a area da cidade:\n\n");
  scanf("%f", &Área2);

  printf("qual o PIB:\n\n");
  scanf("%f", &PIB2);

  printf("quantos pontos turisticos possui:\n\n");
  scanf("%d", &NPT2);

// Área para exibição dos dados da cidade

//exibição dos dados da cidade
printf("COMPARAÇÃO DAS CARTAS\n\n\n");

printf("CARTA 1\n\n");
printf("estado: %s\n",Estado);
printf("codigo: %s\n",Codigo);
printf("cidade: %s\n",cidade);
printf("populacão: %d\n",População);
printf("Área: %.3f\n",Área);
printf("PIB: %.3f\n", PIB);
printf("NPT: %d\n\n\n", NPT);

printf("CARTA 2\n\n");
printf("estado: %s\n",estado2);
printf("codigo: %s\n",Codigo2);
printf("cidade: %s\n",cidade2);
printf("populacão: %d\n",População2);
printf("Área: %.3f\n",Área2);
printf("PIB: %.3f\n", PIB2);
printf("NPT: %d\n", NPT2);


  return 0;