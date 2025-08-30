#include <stdio.h>

int main(){
   
    int idade, matricula;
    float altura;
    char nome[50];
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    
    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matrícula: \n");
    scanf("%d", &idade);
    
    printf("Nome do aluno: %s - Matrícula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %.2f\n", idade,altura);

    return 0;

}