#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1[30];
    char codigo1[4];      // Exemplo: 01
    char nomeCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da Carta 2
    char estado2[30];
    char codigo2[4];    // Exemplo: 02
    char nomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Nome do estado: ");
    scanf(" %[^\n]", estado1);

    printf("Código da carta (exemplo: 01): ");
    scanf("%3s", codigo1);

    printf("Nome da capital do estado: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População : ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    printf("***Dados computados***:\n");

    printf("\n");

    // Entrada dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");

    printf("Nome do estado: ");
    scanf(" %[^\n]", estado2);

    printf("Código da carta (exemplo: 02): ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População : ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    printf("***Dados computados***:\n");

    printf("\n");
    printf("\n");
    printf("\n");

    //Imprimindo carta 01
    printf("Essa é a carta 01:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %c%s\n", estado1[0], codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");
    printf("\n");
    
    //Imprimindo carta 02
    printf("Essa é a carta 02:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %c%s\n", estado2[0], codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
