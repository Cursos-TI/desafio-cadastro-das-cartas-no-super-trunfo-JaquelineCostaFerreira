#include <stdio.h>

int main() {

    // Declaração das variáveis para armazenar os dados das duas cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;  // População como unsigned long int
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Cálculos das densidades populacionais, PIB per capita e Super Poder
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float superPoder1, superPoder2;

    // Entrada dos dados da Carta 1
    printf("Vamos Começar pela Carta 1!:\n");
    printf("Digite o Estado: ");
    scanf("%c\n", &estado1);
    printf("Código da Carta: ");
    scanf("%s\n", &codigo1);
    printf("Nome da Cidade: ");
    scanf("%s\n", &cidade1);
    printf("População: ");
    scanf("%lu\n", &populacao1);  // Lê a população como unsigned long int
    printf("Área (em km²): ");
    scanf("%f\n", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f\n", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d\n", &pontos1);

    // Cálculo da Densidade Populacional e PIB per Capita para a Carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // PIB em reais, então multiplicamos por 1 bilhão

    // Cálculo do Super Poder da Carta 1
    superPoder1 = (float)populacao1 + area1 + pib1 * 1000000000 + pontos1 + pib_per_capita1 + (1 / densidade1);

    // Entrada dos dados da Carta 2
    printf("\nAgora vamos para a Carta 2:\n");
    printf("Digite o Estado: ");
    scanf("%c\n", &estado2);
    printf("Código da Carta: ");
    scanf("%s\n", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s\n", cidade2);
    printf("População: ");
    scanf("%lu\n", &populacao2);  // Lê a população como unsigned long int
    printf("Área (em km²): ");
    scanf("%f\n", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f\n", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d\n", &pontos2);

    // Cálculo da Densidade Populacional e PIB per Capita para a Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;  // PIB em reais, então multiplicamos por 1 bilhão

    // Cálculo do Super Poder da Carta 2
    superPoder2 = (float)populacao2 + area2 + pib2 * 1000000000 + pontos2 + pib_per_capita2 + (1 / densidade2);

    // Exibição dos resultados e comparações
    printf("\nComparação dos Atributos:\n");

    // Comparação da População
    printf("População:\n");
    printf("Carta 1 vence: %d, Carta 2 vence: %d\n", populacao1 > populacao2, populacao1 <= populacao2);

    // Comparação da Área
    printf("Área:\n");
    printf("Carta 1 vence: %d, Carta 2 vence: %d\n", area1 > area2, area1 <= area2);

    // Comparação do PIB
    printf("PIB:\n");
    printf("Carta 1 vence: %d, Carta 2 vence: %d\n", pib1 > pib2, pib1 <= pib2);

    // Comparação dos Pontos Turísticos
    printf("Pontos Turísticos:\n");
    printf("Carta 1 vence: %d, Carta 2 vence: %d\n", pontos1 > pontos2, pontos1 <= pontos2);

    // Comparação da Densidade Populacional (menor é melhor)
    printf("Densidade Populacional:\n");
    printf("Carta 1 vence: %d, Carta 2 vence: %d\n", densidade1 < densidade2, densidade1 >= densidade2);

    // Comparação do PIB per Capita
    printf("PIB per Capita:\n");
    printf("Carta 1 vence: %d, Carta 2 vence: %d\n", pib_per_capita1 > pib_per_capita2, pib_per_capita1 <= pib_per_capita2);

    // Comparação do Super Poder
    printf("Super Poder:\n");
    printf("Carta 1 vence: %d, Carta 2 vence: %d\n", superPoder1 > superPoder2, superPoder1 <= superPoder2);

    printf("=====Você chegou ao final do Jogo, Obrigada!====");

    return 0;
}
