/*
 * Programa simples para cadastrar e exibir duas cartas do Super Trunfo (nível iniciante).
 * Requisitos atendidos:
 * - Lê dados de duas cartas via teclado
 * - Armazena em variáveis apropriadas
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    /* Variáveis da Carta 1 (tipos especificados) */
    char estado1;                 /* Uma letra A..H */
    char codigo1[8];              /* Ex: "A01" */
    char nomeCidade1[100];
    int populacao1;               /* inteiro */
    float area1;                  /* em km^2 */
    float pib1;                   /* em bilhoes */
    int pontosTuristicos1;        /* inteiro */

    /* Variáveis da Carta 2 (tipos especificados) */
    char estado2;
    char codigo2[8];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

     /* Instruções ao usuário */
     printf("Cadastro da Carta 1:\n");
     printf("Por favor, informe os dados solicitados (pressione Enter apos cada entrada).\n\n");

     /* Mostra mapa de estados para padronizacao da letra (ajuda o usuario a saber qual letra usar)
         Aqui usamos estados do Nordeste mapeados para as letras A..H, sem numeracao. */
     printf("Mapa de estados (letras correspondem aos estados do Nordeste):\n");
     printf("A -> Bahia\n");
     printf("B -> Pernambuco\n");
     printf("C -> Ceara\n");
     printf("D -> Rio Grande do Norte\n");
     printf("E -> Paraiba\n");
     printf("F -> Piaui\n");
     printf("G -> Alagoas\n");
     printf("H -> Sergipe\n\n");

    /* Leitura da Carta 1: usamos fgets para linha e depois atribuimos/convertimos para os tipos pedidos */
    {
        char linha[256];

        printf("Estado (uma letra A..H): ");
        fgets(linha, sizeof(linha), stdin);
        /* pega o primeiro caractere como estado */
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

        printf("PIB: ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%f", &pib1);

        printf("Numero de Pontos Turisticos: ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%d", &pontosTuristicos1);
    }

    /* Leitura da Carta 2 */
    printf("\nCadastro da Carta 2:\n");

    /* Leitura da Carta 2: le e converte para os tipos especificados */
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

        printf("PIB: ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%f", &pib2);

        printf("Numero de Pontos Turisticos: ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%d", &pontosTuristicos2);
    }

    /* Exibicao formatada das Cartas */
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
