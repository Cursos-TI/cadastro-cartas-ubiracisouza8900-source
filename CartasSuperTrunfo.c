//====================================
 // Nível Novato
 //===================================


/*// Desafio Super Trunfo - Países
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
*/

//===============================================================
//***************//Nível Aventureiro*****************************
//===============================================================

/*#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1[20];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;

    // Propriedades calculadas
    float densidade1;
    float pibPerCapita1;

    // ===== CARTA 2 =====
    char estado2[20];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;

    // Propriedades calculadas
    float densidade2;
    float pibPerCapita2;

    // =============================
    // CADASTRO DA CARTA 1
    // =============================
    printf("=== CARTA 1 ===\n");

    printf("Estado:\n  ");
    scanf("%s", estado1);

    printf("Codigo da carta:\n  ");
    scanf("%s", codigo1);

    printf("Cidade: \n ");
    scanf("%s", cidade1);

    printf("Populacao:\n  ");
    scanf("%d", &populacao1);

    printf("Area (km2):\n  ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): \n ");
    scanf("%f", &pib1);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // =============================
    // CADASTRO DA CARTA 2
    // =============================
    printf("\n=== CARTA 2 ===\n");

    printf("Estado:\n ");
    scanf("%s", estado2);

    printf("Codigo da carta:\n ");
    scanf("%s", codigo2);

    printf("Cidade:\n  ");
    scanf("%s", cidade2);

    printf("Populacao: \n ");
    scanf("%d", &populacao2);

    printf("Area (km2):\n  ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes:\n  ");
    scanf("%f", &pib2);

    // Cálculos
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // =============================
    // EXIBIÇÃO DOS DADOS
    // =============================
    printf("\n===== DADOS DAS CARTAS =====\n");

    printf("\nCarta 1 - %s (%s)\n", cidade1, estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.6f\n", pibPerCapita1);

    printf("\nCarta 2 - %s (%s)\n", cidade2, estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.6f\n", pibPerCapita2);

    return 0;
}*/

/*=====================================================
*****************Nível Aventureiro***************
==========================================================*/

#include <stdio.h>

int main(){

    // ===== CARTA 1 =====
    char pais1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1900.0; // em bilhões
    int pontosTuristicos1 = 25;
    float densidade1 = populacao1 / area1;

    // ===== CARTA 2 =====
    char pais2[] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 630.0;
    int pontosTuristicos2 = 18;
    float densidade2 = populacao2 / area2;

    int atributo;
    int cartaA, cartaB;

    float valorA, valorB;
    char *nomeA, *nomeB;

    // ===== MENU =====
    printf("🃏 SUPER TRUNFO - COMPARAÇÃO DE CARTAS 🃏\n\n");

    printf("Escolha o atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo);

    printf("\nEscolha a PRIMEIRA carta (1-Brasil | 2-Argentina): ");
    scanf("%d", &cartaA);

    printf("Escolha a SEGUNDA carta (1-Brasil | 2-Argentina): ");
    scanf("%d", &cartaB);

    // ===== DEFININDO CARTA A =====
    if (cartaA == 1){
        nomeA = pais1;
        if (atributo == 1) valorA = populacao1;
        if (atributo == 2) valorA = area1;
        if (atributo == 3) valorA = pib1;
        if (atributo == 4) valorA = pontosTuristicos1;
        if (atributo == 5) valorA = densidade1;
    } else {
        nomeA = pais2;
        if (atributo == 1) valorA = populacao2;
        if (atributo == 2) valorA = area2;
        if (atributo == 3) valorA = pib2;
        if (atributo == 4) valorA = pontosTuristicos2;
        if (atributo == 5) valorA = densidade2;
    }

    // ===== DEFININDO CARTA B =====
    if (cartaB == 1){
        nomeB = pais1;
        if (atributo == 1) valorB = populacao1;
        if (atributo == 2) valorB = area1;
        if (atributo == 3) valorB = pib1;
        if (atributo == 4) valorB = pontosTuristicos1;
        if (atributo == 5) valorB = densidade1;
    } else {
        nomeB = pais2;
        if (atributo == 1) valorB = populacao2;
        if (atributo == 2) valorB = area2;
        if (atributo == 3) valorB = pib2;
        if (atributo == 4) valorB = pontosTuristicos2;
        if (atributo == 5) valorB = densidade2;
    }

    // ===== RESULTADO =====
    printf("\nComparacao:\n");
    printf("%s: %.2f\n", nomeA, valorA);
    printf("%s: %.2f\n", nomeB, valorB);

    if (valorA > valorB)
        printf("\nVencedor: %s\n", nomeA);
    else if (valorB > valorA)
        printf("\ Vencedor: %s\n", nomeB);
    else
        printf("\nEmpate!\n");

    return 0;
}
