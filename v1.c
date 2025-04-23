#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
    int unidade1, unidade2;

    // Carta 1
    printf("Carta 1:\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código: ");
    scanf("%3s", codigo1);

    printf("Digite a cidade: ");
    scanf("%29s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB (valor numérico ex: 2.5): ");
    scanf("%f", &pib1);
    printf("Esse valor está em:\n1. Milhões\n2. Bilhões\n3. Trilhões\nEscolha: ");
    scanf("%d", &unidade1);

    if (unidade1 == 1) pib1 *= 1000000;
    else if (unidade1 == 2) pib1 *= 1000000000;
    else if (unidade1 == 3) pib1 *= 1000000000000;

    printf("Digite os pontos turísticos: ");
    scanf("%d", &turismo1);

    printf("\n");

    // Carta 2
    printf("Carta 2:\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código: ");
    scanf("%3s", codigo2);

    printf("Digite a cidade: ");
    scanf("%29s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB (valor numérico ex: 2.5): ");
    scanf("%f", &pib2);
    printf("Esse valor está em:\n1. Milhões\n2. Bilhões\n3. Trilhões\nEscolha: ");
    scanf("%d", &unidade2);

    if (unidade2 == 1) pib2 *= 1000000;
    else if (unidade2 == 2) pib2 *= 1000000000;
    else if (unidade2 == 3) pib2 *= 1000000000000;

    printf("Digite os pontos turísticos: ");
    scanf("%d", &turismo2);

    // Impressão das cartas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);

    return 0;
}
