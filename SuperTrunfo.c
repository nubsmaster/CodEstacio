#include <stdio.h>
#include <string.h>
#include <math.h>


int main(){
    //Declaração de Variáveis
    int populacao1, populacao2, pontTur1, pontTur2; //variaveis inteiras das cartas
    char nomeCid1[11], nomeCid2[11], cod1[4], cod2[4], estado1, estado2; //variáveis tipo char e string das cartas
    float area1, area2, pib1, pib2, pibPerCap1, pibPerCap2, densDemo1, densDemo2; //variáveis tipo float das cartas
    int bolPop, bolAre, bolPib, bolPoT, bolPPC, bolDeD, bolSuP; //variáveis booleanas auxiliares
    char resPopulac[7], resArea[7], resPib[7], resPontTur[7], resPibPerCap[7], resDensDemo[7], resSuperPoder[7]; //Variáveis para guardar o vencedor de cada modalidade
    float superPoder1, superPoder2, aux1, aux2;
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

    // aqui estou definindo a densidade demográfica e o pib per cápita da primeira carta
    pibPerCap1 = (float) (pib1*1000000000)/populacao1;
    densDemo1 = (float) populacao1/area1;

    //Cálculo do Super Poder primeira carta

    aux1 = (float)(1/densDemo2);
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontTur1 + pibPerCap1 + aux1;

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
    
    // aqui estou definindo a densidade demográfica e o pib per cápita da segunda carta
    pibPerCap2 =  (pib2*1000000000)/(float)populacao2;
    densDemo2 = (float)populacao2/area2;

    //Cálculo do Super Poder segunda carta
    aux2= (float)(1/densDemo2);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontTur2 + pibPerCap2 + aux2;
   
    //Comparando dados das Cartas
   
    bolPop = populacao1 > populacao2;
    bolAre = area1 > area2;
    bolPib = pib1 > pib2;
    bolPoT = pontTur1 > pontTur2;
    bolPPC = pibPerCap1 > pibPerCap2;
    bolDeD = densDemo1 < densDemo2;
    bolSuP = superPoder1 > superPoder2;

    //População

    if (bolPop) {
        strcpy(resPopulac,"Carta1");
    }else{
        strcpy(resPopulac,"Carta2");
    }

    //Area

    if (bolAre) {
        strcpy(resArea,"Carta1");
    }else{
        strcpy(resArea,"Carta2");
    }
    
    //PIB

    if (bolPib) {
        strcpy(resPib,"Carta1");
    }else{
        strcpy(resPib,"Carta2");
    }
    
    //Pontos Turisticos

    if (bolPoT) {
        strcpy(resPontTur,"Carta1");
    }else{
        strcpy(resPontTur,"Carta2");
    }
    
    //PIB Per Capta
    
    if (bolPPC) {
        strcpy(resPibPerCap,"Carta1");
    }else{
        strcpy(resPibPerCap,"Carta2");
    }
    
    //Densidade Demográfica

    if (bolDeD) {
        strcpy(resDensDemo,"Carta1");
    }else{
        strcpy(resDensDemo,"Carta2");
    }

    //Super Poder
    
    if (bolSuP) {
        strcpy(resSuperPoder,"Carta1");
    }else{
        strcpy(resSuperPoder,"Carta2");
    }

    //Saída de dados, visualizando as cartas

    printf("\n");
    printf("\n");
    printf("Agora vamos ver as duas cartas!\n");
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
    printf("Densidade Demográfica: %.2f habitantes por km²\n", densDemo1);
    printf("PIB per capita: %.2f reais\n", pibPerCap1);
    printf("Super Poder: %.6f\n", superPoder1);
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
    printf("Densidade Demográfica: %.2f habitantes por km²\n", densDemo2);
    printf("PIB per capita: %.2f reais\n", pibPerCap2);
    printf("Super Poder: %.6f\n", superPoder2);
    printf("\n");
    printf("\n");

    //Comparando as cartas

    printf("Comparando as Cartas:");
    printf("\n");
    printf("População: %s venceu (%d)\n", resPopulac, bolPop);
    printf("Área: %s venceu (%d)\n", resArea, bolAre);
    printf("PIB: %s venceu (%d)\n", resPib, bolPib);
    printf("Número de pontos turísticos: %s venceu (%d)\n", resPontTur, bolPoT);
    printf("Densidade Demográfica: %s venceu (%d)\n", resDensDemo, bolDeD);
    printf("PIB per capita: %s venceu (%d)\n", resPibPerCap, bolPPC);
    printf("Super Poder: %s venceu (%d)\n", resSuperPoder , bolSuP);
    printf("\n");


    return 0;
}