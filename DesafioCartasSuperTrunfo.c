#include <stdio.h>

int main() {

    // Declaração de variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração de variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("==== Bem-vindo ao Super Trunfo de Cidades! ====\n");

    // Entrada de dados da primeira carta
    printf("\nDigite o nome do estado da Carta 1: ");
    scanf("%c\n", &estado1);
    
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s\n", &codigo1);
    
    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%[^\n]", &nomeCidade1);
    
    printf("Digite a população da cidade da Carta 1: ");
    scanf("%d\n", &populacao1);
    
    printf("Digite a área da cidade da Carta 1 (km²): ");
    scanf("%f\n", &area1);
    
    printf("Digite o PIB da cidade da Carta 1 (bilhões de reais): ");
    scanf("%f\n", &pib1);
    
    printf("Digite o número de pontos turísticos da cidade da Carta 1: ");
    scanf("%d\n", &pontosTuristicos1);

    // Entrada de dados da segunda carta
    printf("\nDigite o nome do estado da Carta 2: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf("%s\n", codigo2);
    
    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("Digite a população da cidade da Carta 2: ");
    scanf("%d\n", &populacao2);
    
    printf("Digite a área da cidade da Carta 2 (km²): ");
    scanf("%f\n", &area2);
    
    printf("Digite o PIB da cidade da Carta 2 (bilhões de reais): ");
    scanf("%f\n", &pib2);
    
    printf("Digite o número de pontos turísticos da cidade da Carta 2: ");
    scanf("%d\n", &pontosTuristicos2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}