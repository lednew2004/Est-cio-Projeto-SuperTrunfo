#include <stdio.h>

char nameOfJogador[20];

int main()
{
    printf("Digite seu Nome, Por Favor: ");
    scanf("%s", nameOfJogador);

    printf("\nOlá %s, vamos começar o Super Trunfo de Estados!\n", nameOfJogador);
    printf("Você criará cartas com dados de cidades de um estado.\n\n");

    // Primeira carta
    char letraDoPrimeiroEstado;
    char codigoDaPrimeiraCarta[20];
    char nomeDaPrimeiraCidade[20];
    unsigned long int populacaoPrimeiraCidade;
    float areaKmPrimeiraCidade;
    float pibPrimeiraCidade;
    int pontosTuristicosPrimeiraCidade;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoderCarta1;

    // Segunda carta
    char letraDoSegundoEstado;
    char codigoDaSegundaCarta[20];
    char nomeDaSegundaCidade[20];
    unsigned long int populacaoSegundaCidade;
    float areaKmSegundaCidade;
    float pibSegundaCidade;
    int pontosTuristicosSegundaCidade;
    float densidadePopulacionalSegundaCarta;
    float pibPerCapitaSegundaCarta;
    float superPoderCarta2;

    // Entrada da primeira carta
    printf("\n== Carta 1 ==\n");

    printf("Digite a letra inicial do estado (ex: Ceará = C): ");
    scanf(" %c", &letraDoPrimeiroEstado);

    printf("Digite o código da carta (formato: LetraDoEstado + número entre 01 e 04, ex: C02): ");
    scanf("%s", codigoDaPrimeiraCarta);

    printf("Digite o nome da cidade pertencente ao estado de letra %c: ", letraDoPrimeiroEstado);
    scanf("%s", nomeDaPrimeiraCidade);

    printf("Digite o número da população da cidade (ex: 543210): ");
    scanf("%lu", &populacaoPrimeiraCidade);

    printf("Digite a área da cidade em km² (ex: 51.233): ");
    scanf("%f", &areaKmPrimeiraCidade);

    printf("Digite o PIB da cidade (ex: 1234567.89): ");
    scanf("%f", &pibPrimeiraCidade);

    printf("Digite a quantidade de pontos turísticos da cidade (ex: 5): ");
    scanf("%d", &pontosTuristicosPrimeiraCidade);

    // Entrada da segunda carta
    printf("\n== Carta 2 ==\n");

    printf("Digite a letra inicial do estado (ex: Bahia = B): ");
    scanf(" %c", &letraDoSegundoEstado);

    printf("Digite o código da carta (formato: LetraDoEstado + número entre 01 e 04, ex: B04): ");
    scanf("%s", codigoDaSegundaCarta);

    printf("Digite o nome da cidade pertencente ao estado de letra %c: ", letraDoSegundoEstado);
    scanf("%s", nomeDaSegundaCidade);

    printf("Digite o número da população da cidade (ex: 876543): ");
    scanf("%lu", &populacaoSegundaCidade);

    printf("Digite a área da cidade em km² (ex: 61.500): ");
    scanf("%f", &areaKmSegundaCidade);

    printf("Digite o PIB da cidade (ex: 9876543.21): ");
    scanf("%f", &pibSegundaCidade);

    printf("Digite a quantidade de pontos turísticos da cidade (ex: 3): ");
    scanf("%d", &pontosTuristicosSegundaCidade);

    // Cálculos
    densidadePopulacional = populacaoPrimeiraCidade / areaKmPrimeiraCidade;
    pibPerCapita = pibPrimeiraCidade / populacaoPrimeiraCidade;

    densidadePopulacionalSegundaCarta = populacaoSegundaCidade / areaKmSegundaCidade;
    pibPerCapitaSegundaCarta = pibSegundaCidade / populacaoSegundaCidade;

    superPoderCarta1 = populacaoPrimeiraCidade + areaKmPrimeiraCidade + pibPrimeiraCidade +
                       pontosTuristicosPrimeiraCidade + pibPerCapita + (1.0f / densidadePopulacional);

    superPoderCarta2 = populacaoSegundaCidade + areaKmSegundaCidade + pibSegundaCidade +
                       pontosTuristicosSegundaCidade + pibPerCapitaSegundaCarta + (1.0f / densidadePopulacionalSegundaCarta);

    // Exibição das cartas
    printf("\n\n--- Exibindo Cartas ---\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", letraDoPrimeiroEstado);
    printf("Código: %s\n", codigoDaPrimeiraCarta);
    printf("Cidade: %s\n", nomeDaPrimeiraCidade);
    printf("População: %lu\n", populacaoPrimeiraCidade);
    printf("Área: %.2f km²\n", areaKmPrimeiraCidade);
    printf("PIB: %.2f\n", pibPrimeiraCidade);
    printf("Pontos turísticos: %d\n", pontosTuristicosPrimeiraCidade);
    printf("Densidade Populacional: %.3f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.3f\n", pibPerCapita);
    printf("Super Poder: %.3f\n", superPoderCarta1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", letraDoSegundoEstado);
    printf("Código: %s\n", codigoDaSegundaCarta);
    printf("Cidade: %s\n", nomeDaSegundaCidade);
    printf("População: %lu\n", populacaoSegundaCidade);
    printf("Área: %.2f km²\n", areaKmSegundaCidade);
    printf("PIB: %.2f\n", pibSegundaCidade);
    printf("Pontos turísticos: %d\n", pontosTuristicosSegundaCidade);
    printf("Densidade Populacional: %.3f hab/km²\n", densidadePopulacionalSegundaCarta);
    printf("PIB per Capita: %.3f\n", pibPerCapitaSegundaCarta);
    printf("Super Poder: %.3f\n", superPoderCarta2);

    // Comparações
    printf("\n\n--- Comparação de Cartas ---\n");

    printf("População: Carta 1 venceu (%d)\n", populacaoPrimeiraCidade > populacaoSegundaCidade);
    printf("Área: Carta 1 venceu (%d)\n", areaKmPrimeiraCidade > areaKmSegundaCidade);
    printf("PIB: Carta 1 venceu (%d)\n", pibPrimeiraCidade > pibSegundaCidade);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicosPrimeiraCidade > pontosTuristicosSegundaCidade);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional < densidadePopulacionalSegundaCarta); // MENOR vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita > pibPerCapitaSegundaCarta);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoderCarta1 > superPoderCarta2);

    return 0;
}
