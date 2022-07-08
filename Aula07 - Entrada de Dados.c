
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");

    /*int n;
    float m;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("Digite um número real: ");
    scanf("%f", &m);
    printf("Você digitou os valores %d e %.1f. Obrigado!\n", n, m );
    */

    /*char r;
    char s;
    printf("Digite só uma letra: ");
    fflush(stdin);
    scanf("%c", &r);
    printf("Digite mais uma letra: ");
    fflush(stdin);
    scanf("%c", &s);
    printf("Você digitou as letras \"%c\" e \"%c\".", r, s);
    */

    /*
    //>>>PARA UM SÓ CARACTERE USAR O SEGUINTE COMANDO:<<<
    char r;
    char s;
    printf("Digite só uma letra: ");
    fflush(stdin);
    r = getchar ();
    printf("Digite mais uma letra: ");
    fflush(stdin);
    s = getchar ();
    printf("Você digitou as letras \"%c\" e \"%c\".", r, s);
    */

    //>>>PARA USO DE CARACTERESSS (NOMES GRANDES) USAR O SEGUINTE COMANDO:<<<
    char nome [30];
    char ender [40];
    printf("Digite seu nome: ");
    fflush(stdin);
    gets (nome);
    printf("Digite seu endereço: ");
    fflush(stdin);
    gets (ender);
    printf("Você digitou \"%s\" e \"%s\".", nome, ender);




}
