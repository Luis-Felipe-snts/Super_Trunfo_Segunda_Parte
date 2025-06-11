#include <stdio.h>

// Exibe os dados da cidade formatados
void processCityData(
    char pais[50],
    char estado[10],
    char codigo_da_carta[5],
    char nome_cidade[50],
    unsigned long int populacao,
    float area,
    float pib,
    float densidade_populacional,
    float pib_per_capita,
    int num_pontos_turisticos)
{
    printf("\nEstado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf("Cidade escolhida: %s\n", nome_cidade);
    printf("População: %lu habitantes\n", populacao);
    printf("Área Total (em km²): %.2f Km²\n", area);
    printf("PIB: %.2f milhões de reais\n", pib);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos);
}

// Lê os dados da cidade do usuário
void readCityData(
    char pais[50],
    char estado[10],
    char codigo_da_carta[5],
    char nome_cidade[50],
    unsigned long int *populacao,
    float *area,
    float *pib,
    int *num_pontos_turisticos)
{
    printf("Escolha um país: ");
    scanf(" %49[^\n]", pais);
    printf("Sigla de um Estado desse país: ");
    scanf(" %9[^\n]", estado);
    printf("Escolha uma cidade que pertence a esse Estado: ");
    scanf(" %49[^\n]", nome_cidade);
    printf("População da cidade: ");
    scanf("%lu", populacao);
    printf("Área Total (em km²): ");
    scanf("%f", area);
    printf("PIB da cidade (em milhões de reais): ");
    scanf("%f", pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", num_pontos_turisticos);
}

int main()
{
    // CARTA 1
    char pais1[50], estado1[10], codigo_da_carta1[5] = "A01", nome_da_cidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade_populacional1, pib_per_capita1;
    int num_pontos_turisticos1;

    // CARTA 2
    char pais2[50], estado2[10], codigo_da_carta2[5] = "A02", nome_da_cidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;
    int num_pontos_turisticos2;

    printf("Informe os dados da CARTA 1:\n");
    readCityData(pais1, estado1, codigo_da_carta1, nome_da_cidade1, &populacao1, &area1, &pib1, &num_pontos_turisticos1);

    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000 / populacao1;

    processCityData(pais1, estado1, codigo_da_carta1, nome_da_cidade1, populacao1, area1, pib1, densidade_populacional1, pib_per_capita1, num_pontos_turisticos1);

    printf("\nInforme os dados da CARTA 2:\n");
    readCityData(pais2, estado2, codigo_da_carta2, nome_da_cidade2, &populacao2, &area2, &pib2, &num_pontos_turisticos2);

    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000 / populacao2;

    processCityData(pais2, estado2, codigo_da_carta2, nome_da_cidade2, populacao2, area2, pib2, densidade_populacional2, pib_per_capita2, num_pontos_turisticos2);

    int atributo1, atributo2, atributo3;
    int resultado1 = 0, resultado2 = 0, resultado3 = 0;

    // Comparação - Atributo 1
    printf("\nCOMPARAÇÃO ENTRE AS CARTAS\n");
    printf("\nEscolha o primeiro atributo:\n");
    printf("1. População\n2. PIB\n3. Densidade Populacional\n4. Área Total\n5. Pontos Turísticos\n6. Sair\n");
    printf("Atributo (1): ");
    scanf("%d", &atributo1);

    switch (atributo1) {
        case 1:
            resultado1 = populacao1 > populacao2;
            break;
        case 2:
            resultado1 = pib1 > pib2;
            break;
        case 3:
            resultado1 = densidade_populacional1 > densidade_populacional2;
            break;
        case 4:
            resultado1 = area1 > area2;
            break;
        case 5:
            resultado1 = num_pontos_turisticos1 > num_pontos_turisticos2;
            break;
        case 6:
            printf("Saindo...\n");
            return 0;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // Comparação - Atributo 2
    printf("\nEscolha o segundo atributo (diferente do anterior):\n");
    printf("Atributo (2): ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Escolha um atributo diferente do anterior.\n");
        return 0;
    }

    switch (atributo2) {
        case 1:
            resultado2 = populacao1 > populacao2;
            break;
        case 2:
            resultado2 = pib1 > pib2;
            break;
        case 3:
            resultado2 = densidade_populacional1 > densidade_populacional2;
            break;
        case 4:
            resultado2 = area1 > area2;
            break;
        case 5:
            resultado2 = num_pontos_turisticos1 > num_pontos_turisticos2;
            break;
        case 6:
            printf("Saindo...\n");
            return 0;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // Comparação - Atributo 3
    printf("\nEscolha o terceiro atributo (diferente dos anteriores):\n");
    printf("Atributo (3): ");
    scanf("%d", &atributo3);

    if (atributo3 == atributo1 || atributo3 == atributo2) {
        printf("Escolha um atributo diferente dos anteriores.\n");
        return 0;
    }

    switch (atributo3) {
        case 1:
            resultado3 = populacao1 > populacao2;
            break;
        case 2:
            resultado3 = pib1 > pib2;
            break;
        case 3:
            resultado3 = densidade_populacional1 > densidade_populacional2;
            break;
        case 4:
            resultado3 = area1 > area2;
            break;
        case 5:
            resultado3 = num_pontos_turisticos1 > num_pontos_turisticos2;
            break;
        case 6:
            printf("Saindo...\n");
            return 0;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // Resultado final
    int total = resultado1 + resultado2 + resultado3;
    if (total > 1) {
        printf("\nParabéns, CARTA 1 venceu!\n");
    } else if (total == 1) {
        printf("\nEmpate!\n");
    } else {
        printf("\nParabéns, CARTA 2 venceu!\n");
    }

    return 0;
}
