#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

//Programa para atividade 2 de super trunfo.

//Depois de uma pesquisa decidi mudar a forma de abordagem do código, pois estava muito extenso e difícil de dar manutenção, além de cheio de variáveis totalmente dispesáveis

// Decidi criar um construtor para a carta, para evitar criar multiplas variáveis para a mesma coisa, evitando confusões na hora de codar, usei como referência o material da W3:
// https://www-w3schools-com.translate.goog/c/c_typedef.php?_x_tr_sl=en&_x_tr_tl=pt&_x_tr_hl=pt&_x_tr_pto=tc
typedef struct{
    char codCid[4];
    char nomeCid[11];
    int populacao;
    int pontTur;
    float area;
    float pib;
    float pibPerCap;
    float densDemo;
    float superPoder;
} Carta;

// ------------------------------- Limpa Buffer -----------------------------------
// Implementada função para limpar buffer, que usarei na leitura das strings para evitar que a "sujeira" de uma string atrapalhe a outra
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

// -----------------------------Ler String --------------------------------------
// Implementada função para ler string, que é mais seguro e não da tanto erro quanto o scanf
void lerString(char *str, int tamanho) {
    if (fgets(str, tamanho, stdin)) {
        if (str[strlen(str) - 1] == '\n') {
            str[strlen(str) - 1] = '\0'; // remove o \n final
        } else {
            limparBuffer(); // chama o limpa buffer
        }
    }
}

// ----------------------------- Ler Carta ----------------------------------------
// Vi que código para ler a carta era igual então criei uma função pra isso.
Carta lerCarta(){
    Carta cart;
     printf("Código: ");
     lerString(cart.codCid, 4);     
     printf("Nome: ");
     lerString(cart.nomeCid, 11);
     printf("Área (km²): ");
     scanf("%f", &cart.area);
     printf("População: ");
     scanf("%d", &cart.populacao);
     printf("Pontos Turisticos: ");
     scanf("%d", &cart.pontTur);
     printf("PIB (em bilhões): ");
     scanf("%f", &cart.pib);

     cart.pibPerCap = (cart.pib/cart.populacao)*1000;
     cart.densDemo = cart.populacao/cart.area;
     cart.superPoder = cart.area + cart.pontTur + cart.populacao + cart.pib + cart.pibPerCap + (1/cart.densDemo);
    return cart;
}

// -------------------------------- Compara Cartas -----------------------------------------
// Separei a funçao de compara cartas, para poder chamar somente quando necessário e executando somente a opção selecionada.
bool comparaCartas(Carta carta1, Carta carta2, int atributo) {
    printf("\nComparando atributo: %d", atributo);
    switch (atributo) {
        case 1:
            printf(" - Área\n");
            if (carta1.area > carta2.area)
                printf("Vencedor: %s\n", carta1.nomeCid);
            else if (carta2.area > carta1.area)
                printf("Vencedor: %s\n", carta2.nomeCid);
            else
                printf("Empate!\n");
            return false;
            break;

        case 2:
            printf(" - População\n");
            if (carta1.populacao > carta2.populacao)
                printf("Vencedor: %s\n", carta1.nomeCid);
            else if (carta2.populacao > carta1.populacao)
                printf("Vencedor: %s\n", carta2.nomeCid);
            else
                printf("Empate!\n");
            return false;
            break;

        case 3:
            printf(" - Pontos Turísticos\n");
            if (carta1.pontTur > carta2.pontTur)
                printf("Vencedor: %s\n", carta1.nomeCid);
            else if (carta2.pontTur> carta1.pontTur)
                printf("Vencedor: %s\n", carta2.nomeCid);
            else
                printf("Empate!\n");
            return false;
            break;

        case 4:
            printf(" - PIB(em Bilhões)\n");
            if (carta1.pib > carta2.pib)
                printf("Vencedor: %s\n", carta1.nomeCid);
            else if (carta2.pib > carta1.pib)
                printf("Vencedor: %s\n", carta2.nomeCid);
            else
                printf("Empate!\n");
            return false;
            break;

        case 5:
            printf(" - PIB per capita (em Milhões)\n");
            if (carta1.pibPerCap > carta2.pibPerCap)
                printf("Vencedor: %s\n", carta1.nomeCid);
            else if (carta2.pibPerCap > carta1.pibPerCap)
                printf("Vencedor: %s\n", carta2.nomeCid);
            else
                printf("Empate!\n");
            return false;
            break;
        case 6:
            printf(" - Densidade Demográfica\n");
            if (carta1.densDemo > carta2.densDemo)
                printf("Vencedor: %s\n", carta1.nomeCid);
            else if (carta2.densDemo > carta1.densDemo)
                printf("Vencedor: %s\n", carta2.nomeCid);
            else
                printf("Empate!\n");
            return false;
            break;
        case 7:
            printf(" - Super Poder\n");
            if (carta1.superPoder > carta2.superPoder)
                printf("Vencedor: %s\n", carta1.nomeCid);
            else if (carta2.superPoder > carta1.superPoder)
                printf("Vencedor: %s\n", carta2.nomeCid);
            else
                printf("Empate!\n");
            return false;
            break;
        default:
            printf("\nAtributo inválido! Digite um número de 1 a 7\n");
            printf("\n1 - Área\n");
            printf("2 - População\n");
            printf("3 - Pontos Turisticos\n");
            printf("4 - PIB\n");
            printf("5 - PIB per capita\n");
            printf("6 - Densidade Demográfica\n");
            printf("7 - Super Poder\n");
            printf("Opção: ");
            return true;
            break;
    }
}

//--------------------------------- Função principal-----------------------------------------------
int main() {
    Carta carta1, carta2;

    //tive que inicializar este float, pois estava gerando um problema quando eu tentava adicionar o resultado da conta a ele.
    carta1.superPoder=0;
    carta2.superPoder=0;
    
    int atributo;

    // carta 1
    printf("Insira os dados da primeira carta\n");
    carta1 = lerCarta();
    limparBuffer();
    // carta 2
    printf("\nInsira os dados da segunda carta\n");
    carta2 = lerCarta();
    

    // menu de atributo a ser selecionado para a comparação
    printf("\nEscolha o atributo para comparar:\n");
    printf("\n1 - Área\n");
    printf("2 - População\n");
    printf("3 - Pontos Turisticos\n");
    printf("4 - PIB (em Bilhões)\n");
    printf("5 - PIB per capita(em milhões)\n");
    printf("6 - Densidade Demográfica\n");
    printf("7 - Super Poder\n");
    printf("Opção: ");
    
    bool i = true;

    // Comparação
    while (i){
        scanf("%d", &atributo);
        i=comparaCartas(carta1, carta2, atributo);
    };
    
    return 0;
}