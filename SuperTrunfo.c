#include <stdio.h>

int main(){
    //Declaração de Variáveis
    int populacao1, populacao2, pontTur1, pontTur2;
    char nomeCid1[10];
    char nomeCid2[10];
    char cod1[4];
    char cod2[4];
    char estado1, estado2;
    float area1, area2, pib1, pib2;

    //Apresentação do jogo e coleta de dados

    printf("Bem vindo ao Super Trunfo das Cidades!!!\n");
    printf("\n");

    //Carta 1
    printf("Vamos cadastrar a primeira carta!\n");
    printf("\n");
   
    printf("Digite uma letra de A até H que vai representar estado (1 char): \n");
    scanf(" %c", &estado1);
    printf("\n");

    printf("Digite o código da carta(Letra do Código do Estado + numero de 2 dígitos): \n");
    scanf("%3s", fgets(cod1,4,stdin));
    printf("\n");

    printf("Digite o nome da cidade: \n");
    scanf("%10s", fgets(nomeCid1,11,stdin));
    printf("\n");
    
    printf("Digite a População: \n");
    scanf("%d", &populacao1);
    printf("\n");

    printf("Digite a Área em km²: \n");
    scanf("%f", &area1);
    printf("\n");

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("\n");

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontTur1);
    printf("\n");

     //Carta 2
    printf("Vamos cadastrar a segunda carta!\n");
    printf("\n");
   
    printf("Digite uma letra de A até H que vai representar estado (1 char): \n");
    scanf(" %c", &estado2); 
    printf("\n");

    printf("Digite o código da carta(Letra do Código do Estado + numero de 2 dígitos): \n");
    scanf("%3s", fgets(cod2,4,stdin));
    printf("\n");

    printf("Digite o nome da cidade: \n");
    scanf("%10s", fgets(nomeCid2,11,stdin));
    printf("\n");

    printf("Digite a População: \n");
    scanf("%d", &populacao2);
    printf("\n");

    printf("Digite a Área em km²: \n");
    scanf("%f", &area2);
    printf("\n");

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("\n");

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontTur2);
    
    //Saída de dados, visualizando as cartas
    printf("\n");
    printf("\n");
    printf("Muito Bem! Agora vamos ver as duas cartas!\n");
    printf("\n");
    printf("\n");
    //carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da Cidade: %s\n", nomeCid1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontTur1);
    printf("\n");
    //carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da Cidade: %s\n", nomeCid2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontTur2);
    printf("\n");
    printf("\n");

    return 0;
}