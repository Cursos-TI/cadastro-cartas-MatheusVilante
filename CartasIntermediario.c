#include <stdio.h>
#include <string.h>

int main(void) {
    /* Variaveis da Carta 1 */
    char estado1;
    char codigo1[8];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;                /* PIB informado em bilhoes de reais */
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    /* Variaveis da Carta 2 */
    char estado2;
    char codigo2[8];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;                /* PIB informado em bilhoes de reais */
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    printf("Cadastro da Carta 1:\n");
    printf("Informe os dados solicitados (pressione Enter apos cada entrada).\n\n");

    printf("Mapa de estados (A..H):\n");
    printf("A -> Bahia\n");
    printf("B -> Pernambuco\n");
    printf("C -> Ceara\n");
    printf("D -> Rio Grande do Norte\n");
    printf("E -> Paraiba\n");
    printf("F -> Piaui\n");
    printf("G -> Alagoas\n");
    printf("H -> Sergipe\n\n");

    {
        char linha[256];

        printf("Estado (uma letra A..H): ");
        fgets(linha, sizeof(linha), stdin);
        estado1 = linha[0];

        printf("Codigo da Carta (ex: A01): ");
        fgets(codigo1, sizeof(codigo1), stdin);
        codigo1[strcspn(codigo1, "\n")] = '\0';

        printf("Nome da Cidade: ");
        fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
        nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';
    }

    {
        char linha[256];

        printf("Populacao (numero inteiro): ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%d", &populacao1);

        printf("Area (km^2): ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%f", &area1);

        printf("PIB (em bilhoes de reais): ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%f", &pib1);

        printf("Numero de Pontos Turisticos: ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%d", &pontosTuristicos1);
    }

    printf("\nCadastro da Carta 2:\n");

    {
        char linha[256];

        printf("Estado (uma letra A..H): ");
        fgets(linha, sizeof(linha), stdin);
        estado2 = linha[0];

        printf("Codigo da Carta (ex: B02): ");
        fgets(codigo2, sizeof(codigo2), stdin);
        codigo2[strcspn(codigo2, "\n")] = '\0';

        printf("Nome da Cidade: ");
        fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
        nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';
    }

    {
        char linha[256];

        printf("Populacao (numero inteiro): ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%d", &populacao2);

        printf("Area (km^2): ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%f", &area2);

        printf("PIB (em bilhoes de reais): ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%f", &pib2);

        printf("Numero de Pontos Turisticos: ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%d", &pontosTuristicos2);
    }

    /* Calculos do nivel intermediario */
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    /* Converte PIB de bilhoes para reais antes de dividir pela populacao */
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
