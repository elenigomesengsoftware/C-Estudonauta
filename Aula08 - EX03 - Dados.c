#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int idade;
    float peso;

    printf("Qual � o seu nome? ");
    fflush(stdin);
    gets(nome);
    printf("Quantos anos voc� tem? ");
    fflush(stdin);
    scanf("%d", &idade);
    printf("Qual � o seu peso? ");
    fflush(stdin);
    scanf("%f", &peso);
    fflush(stdin);

    printf("\n--------<<< PROCESSANDO >>>--------\n");
    printf("Muito prazer, %s. Voc� tem %d anos e pesa %.1fkg! Correto?\n", nome, idade, peso);
    printf("FIM\n");




}
