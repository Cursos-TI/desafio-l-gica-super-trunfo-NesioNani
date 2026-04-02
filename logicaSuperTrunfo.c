#include <stdio.h>
int main()
{
    // Area para definicao das variaveis para armazenar as propriedades das cidades
    int comparacao;
    // varáveia carta 1
    char letra_estado1;
    char numero_cidade1;
    char nome_estado1[50];
    char nome_cidade1[50];
    int populacao_cidade1;
    float area_cidade1, pib_cidade1, densid_popu1, pib_parcapta1;
    int pontos_tur_cidade1;

    // variáveis carta 2
    char letra_estado2;
    char numero_cidade2;
    char nome_estado2[50];
    char nome_cidade2[50];
    int populacao_cidade2;
    float area_cidade2, pib_cidade2, densid_popu2, pib_parcapta2;
    int pontos_tur_cidade2;

    // Area para entrada de dados
    printf("VAMOS CADASTRAR DUAS CARTAS PARA O JOGO\n");

    // CADASTRO DA CARTA 1
    printf("DIGITE OS DADOS DA CARTA 1\n");
    printf("Letra do Estado (A a H): ");
    scanf(" %c", &letra_estado1);
    printf("Numero da cidade (1 a 4): ");
    scanf(" %c", &numero_cidade1);
    printf("Nome do Estado: ");
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
    densid_popu1 = (float)populacao_cidade1 / area_cidade1;
    densid_popu2 = (float)populacao_cidade2 / area_cidade2;
    pib_parcapta1 = (float)pib_cidade1 / populacao_cidade1;
    pib_parcapta2 = (float)pib_cidade2 / populacao_cidade2;
    printf("EXIBICAO DOS DADOS DIGITADOS NAS DUAS CARTAS\n");

    printf("Carta num.: 1\n");
    printf("Estado: %c\n", letra_estado1);
    printf("Codigo: %c%c\n", letra_estado1, numero_cidade1);
    printf("Nome do Estado: %s\n", nome_estado1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("Populacao: %i habitantes\n", populacao_cidade1);
    printf("Area: %.0f km2\n", area_cidade1);
    printf("PIB: %.2f milhoes de reais.\n", pib_cidade1 / 1000000);
    printf("Num. de pontos turisticos: %i\n", pontos_tur_cidade1);
    printf("Densidade Populacional: %.2f hab/km².\n", densid_popu1);
    printf("PIB per Capita: %.2f reais.\n", pib_parcapta1);

    printf("******************************************\n");
    //  exibicao da carta 2 cadastrada
    printf("Carta num.: 2\n");
    printf("Estado: %c\n", letra_estado2);
    printf("Codigo: %c%c\n", letra_estado2, numero_cidade2);
    printf("Nome do Estado: %s\n", nome_estado2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Populacao: %i habitantes\n", populacao_cidade2);
    printf("Area: %.0f km2\n", area_cidade2);
    printf("PIB: %.2f milhoes de reais.\n", pib_cidade2 / 1000000);
    printf("Num. de pontos turisticos: %i\n", pontos_tur_cidade2);
    printf("Densidade Populacional: %.2f hab/km².\n", densid_popu2);
    printf("PIB per Capita: %.2f reais.\n", (float)pib_cidade2 / populacao_cidade2);

    // menu principal - o usuario escolhe os párametros de comparacao
    // vence o maior valor comparado, exceto para a densidade populacional
    printf("ESCOLHA UM PARAMETRO PARA COMPARAR PARA O PAÍS BRASIL\n");
    printf("1 - para comparar a populacao das cidades\n");
    printf("2 - para comparar a áreas das cidades\n");
    printf("3 - para comparar PIBs das cidades\n");
    printf("4 - para comparar num. pontos turisticos das cidades\n");
    printf("5 - para comparar a densidade demografica das cidades\n");
    scanf("%d\n", &comparacao);
    // rotina de comparacao conforme escolha do usuario
    /* Exibição do Resultado: Mostrar na tela, de forma clara, o resultado
    da comparação, incluindo:
    O nome dos dois países.
    O atributo usado na comparação.
    Os valores do atributo para cada carta.
    Qual carta venceu.
    Em caso de empate, exibir a mensagem "Empate!".*/
    printf(" ***** RESULTADO ******\n");
    printf("ESTADOS COMPARADOS: %s e %s\n", nome_estado1,
           nome_estado2);
    printf("populacao carta1 = %d \n", populacao_cidade1);
    printf("populacao carta2 = %d \n", populacao_cidade2);

    switch (comparacao)
    {
    case 1:
        if (populacao_cidade1 > populacao_cidade2)
        {
            printf("atributo usado na comparação: populacao\n");
            printf("****** VENCEU A CARTA 1 *******\n");
            break;
        }
        else if (populacao_cidade1 < populacao_cidade2)
        {
            printf("atributo usado na comparação: populacao\n");
            printf("****** VENCEU A CARTA 2 *******\n");
            break;
        }
        else
        {
            printf("atributo usado na comparação: populacao\n");
            printf("****** HOUVE EMPATE *******\n");
            break;
        }
    case 2:
        if (area_cidade1 > area_cidade2)
        {
            printf("atributo usado na comparação: area\n");
            printf("****** VENCEU A CARTA 1 *******\n");
            break;
        }
        else if (area_cidade1 < area_cidade2)
        {
            printf("atributo usado na comparação: area\n");
            printf("****** VENCEU A CARTA 2 *******\n");
            break;
        }

        else
        {
            printf("atributo usado na comparação: area\n");
            printf("****** HOUVE EMPATE *******\n");
            break;
        }
    case 3:
        if (pib_cidade1 > pib_cidade2)
        {
            printf("atributo usado na comparação: PIB\n");
            printf("****** VENCEU A CARTA 1 *******\n");
            break;
        }
        else if (pib_cidade1 < pib_cidade2)
        {
            printf("atributo usado na comparação: PIB\n");
            printf("****** VENCEU A CARTA 2 *******\n");
            break;
        }
        else
        {
            printf("atributo usado na comparação: PIB\n");
            printf("****** HOUVE EMPATE *******\n");
            break;
        }

    case 4:
        if (pontos_tur_cidade1 > pontos_tur_cidade2)
        {
            printf("atributo usado na comparação: pontos turisticos\n");
            printf("****** VENCEU A CARTA 1 *******\n");
            break;
        }
        else if (pontos_tur_cidade1 < pontos_tur_cidade2)
        {
            printf("atributo usado na comparação: Pontos Turisticos\n");
            printf("****** VENCEU A CARTA 2 *******\n");
            break;
        }
        else
        {
            printf("atributo usado na comparação: pontos turisticos\n");
            printf("****** HOUVE EMPATE *******\n");
            break;
        }

    case 5:

        if (densid_popu1 < densid_popu2)
        {
            printf("atributo usado na comparação: densid. demografica\n");
            printf("****** VENCEU A CARTA 1 *******\n");
            break;
        }
        else if (densid_popu1 > densid_popu2)
        {
            printf("atributo usado na comparação: densid. demografica\n");
            printf("****** VENCEU A CARTA 2 *******\n");
            break;
        }
        else
        {
            printf("atributo usado na comparação: pontos turisticos\n");
            printf("****** HOUVE EMPATE *******\n");
            break;
        }

    default:
        printf("*******opcao invalida*******\n");
        printf("opicao %d \n", &comparacao);
        break;
    }
    printf("****** F I M ******\n");
    printf("******************************************\n");
    return 0;
}
