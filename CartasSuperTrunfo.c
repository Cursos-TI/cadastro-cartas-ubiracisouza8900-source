
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


  



  // 

  #include <stdio.h>

int main() {
 
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // ATRIBUTOS DA CARTA 1
    char estado1[20];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;

    // ATRIBUTOS DA CARTA 2
    char estado2[20];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;

  // Área para entrada de dados
    // =============================
    // CADASTRO DA CARTA 1
    // =============================
    printf("=== CARTA 1 ===\n");

    printf("Estado: ");
   // Área para exibição dos dados da cidade
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);


    // =============================
    // CADASTRO DA CARTA 2
    // =============================
    printf("\n=== CARTA 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

