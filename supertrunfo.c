#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    int populacao1, pontos_turisticos1;
    float pib1, area1;
    char cidade1[100], estado1[2], codigo1[4];

    // Variáveis para a segunda carta
    int populacao2, pontos_turisticos2;
    float pib2, area2;
    char cidade2[100], estado2[2], codigo2[4];

    // Entrada de dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Insira o número de População: \n");
    scanf("%d", &populacao1);

    printf("Insira o número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Insira o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Insira a Área (em km²): \n");
    scanf("%f", &area1);

    printf("Insira o Nome da Cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Insira uma letra de A a H para o Estado: \n");
    scanf(" %1s", estado1);

    printf("Insira o Código da Carta (ex.: A01): \n");
    scanf("%s", codigo1);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    // Entrada de dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Insira o número de População: \n");
    scanf("%d", &populacao2);

    printf("Insira o número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Insira o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Insira a Área (em km²): \n");
    scanf("%f", &area2);

    printf("Insira o Nome da Cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Insira uma letra de A a H para o Estado: \n");
    scanf(" %1s", estado2);

    printf("Insira o Código da Carta (ex.: A01): \n");
    scanf("%s", codigo2);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}