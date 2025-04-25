#include <stdio.h>

char nameOfJogador[20];

int main()
{
    printf("Digite seu Nome, Por Favor: "); // Um printf para perguntar o nome do jogador como boas vindas.
    scanf("%s", nameOfJogador);             // Scanf para ler o nome e adicionmar na variavel nameOfJogador.

    // Inicialização:
    printf("Olá %s, Vamos começar o super trunfo de estádos, um jogo para criar cartas com dados de cidades de um estádo. você preencherá os campos necessários com as informações das cidades de um estado. \n\n", nameOfJogador); // Exibe uma breve explicação sobre o jogo, exibindo também o nome do jogador.

    /*Variaveis para preencher com os dados*/

    // Primeira carta
    char letraDoPrimeiroEstado;         // Variavel para escrever a letra inicial de cada estado.
    char codigoDaPrimeiraCarta[20];     // Variavel para escrever o código da carta.
    char nomeDaPrimeiraCidade[20];      // Variavel para escrever o nome da cidade.
    int populaçãoPrimeiraCidade;        // variavel para escrever a quantidade em número da população.
    float areaKmPrimeiraCidade;         // Variavel para escrever a área da cidade em quilômetros quadrados(km²).
    float pibPrimeiraCidade;            // Variavel para escrever o pib(Produto Interno Bruto) da cidade.
    int pontosTuristicosPrimeiraCidade; // Variavel para escrever a quantidade de pontos turisticos da cidade.

    // Segunda carta
    char letraDoSegundoEstado;         // Variavel para escrever a letra inicial de cada estado.
    char codigoDaSegundaCarta[20];     // Variavel para escrever o código da carta.
    char nomeDaSegundaCidade[20];      // Variavel para escrever o nome da cidade.
    int populaçãoSegundaCidade;        // variavel para escrever a quantidade em número da população.
    float areaKmSegundaCidade;         // Variavel para escrever a área da cidade em quilômetros quadrados(km²).
    float pibSegundaCidade;            // Variavel para escrever o pib(Produto Interno Bruto) da cidade.
    int pontosTuristicosSegundaCidade; // Variavel para escrever a quantidade de pontos turisticos da cidade.
    // PRIMEIRA CARTA:
    /*Escrever a letra inicial do estado e o adicionar na variavel*/
    printf("Aqui você adicionará A letra inicial do estado, por exemplo: 'Ceará = C' . pense no estado e escreva a letra inicial dele: ");
    scanf(" %c", &letraDoPrimeiroEstado);

    /*Escrever O código da carta e o adicionar na variavel*/
    printf("Aqui você adicionará um código para carta, a letra inical do estado, seguido de um número de 01 a 04, por exemplo: 'F03'. \n No primeiro campo, você adicionou a letra %c, agora escreva essa letra e o numero entre 01 a 04: ", letraDoPrimeiroEstado, "\n\n");
    scanf("%s", codigoDaPrimeiraCarta);
    /*Escrever o nome da cidade e a adicionar na carta*/
    printf("Agora que já escreveu a letra inicial do estado, escreva o nome da cídade pertencente ao estádo:");
    scanf("%s", nomeDaPrimeiraCidade);

    /*Escrever o numero da população que reside na cidade*/
    printf("Agora adicione o número exato da população que reside na cidade de %s: ", nomeDaPrimeiraCidade);
    scanf("%i", &populaçãoPrimeiraCidade);

    /*Escrever á área em km  da cidade*/
    printf("Adicione á área em quimlometros quadrados(km²) da cidade. exemplo: '51.233': ");
    scanf("%f", &areaKmPrimeiraCidade);

    /*Escrever o pib arrecadado da cidade*/
    printf("Adicione o PIB da cidade:");
    scanf("%f", &pibPrimeiraCidade);

    /*Escrever a quantidade de pontos turisticos da cidade*/
    printf("Adicione a quantidade de pontos turisticos existentes na cidade de %s: ", nomeDaPrimeiraCidade);
    scanf("%i", &pontosTuristicosPrimeiraCidade);

    printf("\n\n\n"); // espaçamento entre a primeira e segunda carta.

    // Segunda carta:
    printf("Você já esclareceu os dados da primeira carta, agora vamos para á segunda\n\n");

    printf("Inicial do estádo: ");
    scanf(" %c", &letraDoSegundoEstado);

    printf("Código da carta(Inicial do estado + número entre 01 a 04): ");
    scanf("%s", codigoDaSegundaCarta);

    printf("Nome da cidade pertencente ao estado de inicial %c: ", letraDoSegundoEstado);
    scanf("%s", nomeDaSegundaCidade);

    printf("População da cidade %s: ", nomeDaSegundaCidade);
    scanf("%i", &populaçãoSegundaCidade);

    printf("Área da cidade: ");
    scanf("%f", &areaKmSegundaCidade);

    printf("PIB da cidade: ");
    scanf("%f", &pibSegundaCidade);

    printf("Quantidade de pontos turisticos: ");
    scanf("%i", &pontosTuristicosSegundaCidade);

    printf("\n\n\n"); // Espaçamento para exibir as cartas
    /*Exibição dos dados das duas cartas:*/

    printf("Carta 1:\n");
    printf("Estado: %c\n", letraDoPrimeiroEstado);
    printf("Código: %s\n", codigoDaPrimeiraCarta);
    printf("Nome da cidade: %s\n", nomeDaPrimeiraCidade);
    printf("População: %i\n", populaçãoPrimeiraCidade);
    printf("Área: %f\n", areaKmPrimeiraCidade);
    printf("PIB: %f\n", pibPrimeiraCidade);
    printf("Número de pontos turisticos: %i\n", pontosTuristicosPrimeiraCidade);

    printf("\n\n\n"); // Espaçamento para exibir as cartas

    printf("Carta 2:\n");
    printf("Estado: %c\n", letraDoSegundoEstado);
    printf("Código: %s\n", codigoDaSegundaCarta);
    printf("Nome da cidade: %s\n", nomeDaSegundaCidade);
    printf("População: %i\n", populaçãoSegundaCidade);
    printf("Área: %f\n", areaKmSegundaCidade);
    printf("PIB: %f\n", pibSegundaCidade);
    printf("Número de pontos turisticos: %i\n", pontosTuristicosSegundaCidade);
    return 0;
}