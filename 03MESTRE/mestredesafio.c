#include <stdio.h>

int main() {
    printf("DESAFIO SUPER TRUNFO - MESTRE!\n");

    // Declaração das variáveis 

    char estado1, estado2;
    char codigoCidade1[5], codigoCidade2[5];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacaoCidade1, populacaoCidade2;
    float areaCidade1, areaCidade2;
    float pibCidade1, pibCidade2;
    int pontosTuristicosCidade1, pontosTuristicosCidade2;
    float densidadePopulacionalCidade1, densidadePopulacionalCidade2;
    float pibPerCapitaCidade1, pibPerCapitaCidade2;
    float superPoderCidade1, superPoderCidade2;

    // Leitura da Carta 1

    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da Carta 1 (%c01-%c04): ", estado1, estado1);
    scanf(" %s", codigoCidade1);
    printf("Digite o nome da Cidade da Carta 1: ");
    scanf(" %49s", nomeCidade1);
    printf("Digite a população da Cidade da Carta 1: ");
    scanf(" %lu", &populacaoCidade1);
    printf("Digite a área da Cidade da Carta 1 (em km²): ");
    scanf(" %f", &areaCidade1);
    printf("Digite o PIB da Cidade da Carta 1 (em bilhões de reais): ");
    scanf(" %f", &pibCidade1);
    printf("Digite o número de pontos turísticos da Cidade da Carta 1: ");
    scanf(" %d", &pontosTuristicosCidade1);

    // Leitura da Carta 2

    printf("\nDigite o estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da Carta 2 (%c01-%c04): ", estado2, estado2);
    scanf(" %s", codigoCidade2);
    printf("Digite o nome da Cidade da Carta 2: ");
    scanf(" %49s", nomeCidade2);
    printf("Digite a população da Cidade da Carta 2: ");
    scanf(" %lu", &populacaoCidade2);
    printf("Digite a área da Cidade da Carta 2 (em km²): ");
    scanf(" %f", &areaCidade2);
    printf("Digite o PIB da Cidade da Carta 2 (em bilhões de reais): ");
    scanf(" %f", &pibCidade2);
    printf("Digite o número de pontos turísticos da Cidade da Carta 2: ");
    scanf(" %d", &pontosTuristicosCidade2);

    // Cálculo da densidade populacional e PIB per Capita

    densidadePopulacionalCidade1 = populacaoCidade1 / areaCidade1;
    densidadePopulacionalCidade2 = populacaoCidade2 / areaCidade2;
    pibPerCapitaCidade1 = (pibCidade1 * 1000000000) / populacaoCidade1;
    pibPerCapitaCidade2 = (pibCidade2 * 1000000000) / populacaoCidade2;

    // Cálculo do Super Poder

    superPoderCidade1 = populacaoCidade1 + areaCidade1 + pibCidade1 + 
    pontosTuristicosCidade1 + pibPerCapitaCidade1 + (1 / densidadePopulacionalCidade1);
    superPoderCidade2 = populacaoCidade2 + areaCidade2 + pibCidade2 + 
    pontosTuristicosCidade2 + pibPerCapitaCidade2 + (1 / densidadePopulacionalCidade2);

    // Exibição da Carta 1

    printf("\nDados das Cartas:\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCidade1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu habitantes\n", populacaoCidade1);
    printf("Área: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f bilhões de reais\n", pibCidade1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidade1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalCidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaCidade1);
    printf("Super Poder: %.2f\n", superPoderCidade1);
    
    // Exibição da Carta 2

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCidade2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu habitantes\n", populacaoCidade2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f bilhões de reais\n", pibCidade2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidade2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalCidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaCidade2);
    printf("Super Poder: %.2f\n", superPoderCidade2);

    // Comparação das Cartas
    
    printf("\nComparação de Cartas:\n");
    printf("População: %s (%d)\n", (populacaoCidade1 > populacaoCidade2) ? 
    "Carta 1 venceu" : "Carta 2 venceu", (populacaoCidade1 > populacaoCidade2) ? 1 : 0);
    printf("Área: %s (%d)\n", (areaCidade1 > areaCidade2) ? 
    "Carta 1 venceu" : "Carta 2 venceu", (areaCidade1 > areaCidade2) ? 1 : 0);
    printf("PIB: %s (%d)\n", (pibCidade1 > pibCidade2) ? 
    "Carta 1 venceu" : "Carta 2 venceu", (pibCidade1 > pibCidade2) ? 1 : 0);
    printf("Pontos Turísticos: %s (%d)\n", (pontosTuristicosCidade1 > pontosTuristicosCidade2) ? 
    "Carta 1 venceu" : "Carta 2 venceu", (pontosTuristicosCidade1 > pontosTuristicosCidade2) ? 1 : 0);
    printf("Densidade Populacional: %s (%d)\n", (densidadePopulacionalCidade1 < densidadePopulacionalCidade2) ? 
    "Carta 1 venceu" : "Carta 2 venceu", (densidadePopulacionalCidade1 < densidadePopulacionalCidade2) ? 1 : 0);
    printf("PIB per Capita: %s (%d)\n", (pibPerCapitaCidade1 > pibPerCapitaCidade2) ? 
    "Carta 1 venceu" : "Carta 2 venceu", (pibPerCapitaCidade1 > pibPerCapitaCidade2) ? 1 : 0);
    printf("Super Poder: %s (%d)\n", (superPoderCidade1 > superPoderCidade2) ? 
    "Carta 1 venceu" : "Carta 2 venceu", (superPoderCidade1 > superPoderCidade2) ? 1 : 0);

