#include <stdio.h>

int main(){

    char nome[20];
    int idade;
    float altura;

    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    printf("Digite sua idade: \n");
    scanf("%i", &idade);
    printf("Digite sua altura em metros: \n");
    scanf("%f", &altura);
    
    printf("Seu nome é %s, sua idade é %i e você tem %.2fm de altura!\n", nome, idade, altura);
    
}