#include <stdio.h>
#include <string.h>
#include <math.h>

//Programa para atividade 2 de super trunfo.

//Depois de uma pesquisa decidi mudar a forma de abordagem do código, pois estava muito extenso e difícil de dar manutenção, além de cheio de variáveis totalmente dispesáveis

// Decidi criar um construtor para a carta, para evitar criar multiplas variáveis para a mesma coisa, evitando confusões na hora de codar, usei como referência o material da W3:
//https://www-w3schools-com.translate.goog/c/c_structs.php?_x_tr_sl=en&_x_tr_tl=pt&_x_tr_hl=pt&_x_tr_pto=tc
struct Carta{
    char codCid[4];
    char nome[51];
    int populacao;
    int pontTur;
    float area;
    float pib;
    float pibPerCap;
    float densDemo;
    float superPoder = 0;
} ;

// Separei a funçao de compara cartas, para poder chamar somente quando necessário e executando somente a opção selecionada.
void comparaCartas(Carta carta1, Carta carta2, int atributo) {
    printf("\nComparando atributo: ");
    switch (atributo) {
        case 1:
            printf("Área\n");
            if (carta1.area > carta2.area)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.area > carta1.area)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("População\n");
            if (carta1.populacao > carta2.populacao)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.populacao > carta1.populacao)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB\n");
            if (carta1.pib > carta2.pib)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.pib > carta1.pib)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("PIB per capita\n");
            if (carta1.pibPerCap > carta2.pibPerCap)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.pibPerCap > carta1.pibPerCap)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica\n");
            if (carta1.densDemo > carta2.densDemo)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta2.densDemo > carta1.densDemo)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Atributo inválido!\n");
    }
}

int main() {
    Carta carta1, carta2;
    int atributo;

    // Inserindo dados da carta 1
    printf("Insira os dados da primeira carta (cidade):\n");
    printf("Código: ");
    scanf("%3s", fgets(carta1.codCid, 4, stdin));
    printf("Nome: ");
    scanf("%50s", fgets(carta1.nome, 51, stdin));
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta1.pontTur);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("PIB per capita: ");
    scanf("%f", &carta1.pibPerCap);
    printf("Densidade Demográfica: ");
    scanf("%f", &carta1.densDemo);
    printf("Super Poder: ");
    scanf("%f", &carta1.superPoder);
    getchar(); // Limpa o buffer

    // Inserindo dados da carta 2
    printf("\nInsira os dados da segunda carta (cidade):\n");
    printf("Código: ");
    scanf("%3s", fgets(carta2.codCid, 4, stdin));
    printf("Nome: ");
    scanf("%50s", fgets(carta2.nome, 51, stdin));
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta2.pontTur);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("PIB per capita: ");
    scanf("%f", &carta2.pibPerCap);
    printf("Densidade Demográfica: ");
    scanf("%f", &carta2.densDemo);
    printf("Super Poder: ");
    scanf("%f", &carta2.superPoder);~
    getchar(); // Limpa o buffer

    // Escolha do atributo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Área\n");
    printf("2 - População\n");
    printf("3 - Pontos Turisticos\n");
    printf("4 - PIB\n");
    printf("5 - PIB per capita\n");
    printf("6 - Densidade Demográfica\n");
    printf("7 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &atributo);
    

    // Comparação
    comparaCartas(carta1, carta2, atributo);

    return 0;
}