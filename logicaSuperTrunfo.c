#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
     // Area para definicao das variaveis para armazenar as propriedades das cidades
    // varáveia carta 1
    char letra_estado1;
    char numero_cidade1;
    char nome_estado1[50];
    char nome_cidade1[50];
    int populacao_cidade1;
    float area_cidade1;
    float pib_cidade1;
    int pontos_tur_cidade1;

    // variáveis carta 2
    char letra_estado2;
    char numero_cidade2;
    char nome_estado2[50];
    char nome_cidade2[50];
    int populacao_cidade2;
    float area_cidade2;
    float pib_cidade2;
    int pontos_tur_cidade2;
    // Area para entrada de dados
    printf("VAMOS CADASTRAR DUAS CARTAS PARA O JOGO\n");

    // CADASTRO DA CARTA 1
    printf("DIGITE OS DADOS DA CARTA 1\n");
    printf("Letra do Estado (A a H): ");
    scanf(" %c", &letra_estado1);
    printf("Numero da cidade (1 a 4): ");
    scanf(" %c", &numero_cidade1);
    printf("Mome do Estado: ");
    scanf("%s", nome_estado1);
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade1);
    printf("Populacao da cidade: ");
    scanf("%i", &populacao_cidade1);
    printf("Area da cidade km2: ");
    scanf("%f", &area_cidade1);
    printf("PIB da cidade: ");
    scanf("%f", &pib_cidade1);
    printf("Numero de pontos turisticos da cidade: ");
    scanf("%i", &pontos_tur_cidade1);
    printf("******************************************\n");
    //  CADASTRO DA CARTA 2

    printf("DIGITE OS DADOS DA CARTA 2\n");
    printf("Letra do Estado (A a H): ");
    scanf(" %c", &letra_estado2);
    printf("Numero da cidade (1 a 4) ");
    scanf(" %c", &numero_cidade2);
    printf("Nome do Estado: ");
    scanf("%s", nome_estado2);
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade2);
    printf("Populacao da cidade: ");
    scanf("%i", &populacao_cidade2);
    printf("Area da cidade km2: ");
    scanf("%f", &area_cidade2);
    printf("PIB da cidade: ");
    scanf("%f", &pib_cidade2);
    printf("Numero de pontos turisticos da cidade: ");
    scanf("%i", &pontos_tur_cidade2);
    printf("******************************************\n");

    // Area para exibicao dos dados da cidade
    // exibicao da carta 1 cadastrada
    printf("Carta num.: 1\n");
    printf("Estado: %c\n", letra_estado1);
    printf("Codigo: %c%c\n", letra_estado1, numero_cidade1);
    printf("Nome do Estado: %s\n", nome_estado1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("Populacao: %i habitantes\n", populacao_cidade1);
    printf("Area: %.0f km2\n", area_cidade1);
    printf("PIB: %.2f milhoes de reais.\n", pib_cidade1 / 1000000);
    printf("Num. de pontos turisticos: %i\n", pontos_tur_cidade1);
    printf("******************************************\n");
    //  exibicao da carta 2 cadastrada
    printf("Carta num.: 2\n");
    printf("Estado: %c\n", letra_estado2);
    printf("Codigo: %c%c\n", letra_estado2, numero_cidade2);
    printf("Nome do Estado: %s\n", nome_estado2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Populacao: %i habitanes\n", populacao_cidade2);
    printf("Area: %.0f km2\n", area_cidade2);
    printf("PIB: %.2f milhoes de reais.\n", pib_cidade2 / 1000000);
    printf("Num. de pontos turisticos: %i\n", pontos_tur_cidade2);
    printf("****** F I M ******\n");
    printf("******************************************\n");
    return 0;
}
