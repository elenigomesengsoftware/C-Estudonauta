#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int idade;
    float peso;

    printf("Qual é o seu nome? ");
    fflush(stdin);
    gets(nome);
    printf("Quantos anos você tem? ");
    fflush(stdin);
    scanf("%d", &idade);
    printf("Qual é o seu peso? ");
    fflush(stdin);
    scanf("%f", &peso);
    fflush(stdin);

    printf("\n--------<<< PROCESSANDO >>>--------\n");
    printf("Muito prazer, %s. Você tem %d anos e pesa %.1fkg! Correto?\n", nome, idade, peso);
    printf("FIM\n");




}
