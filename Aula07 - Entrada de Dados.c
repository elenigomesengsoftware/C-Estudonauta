
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");

    /*int n;
    float m;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &n);
    printf("Digite um n�mero real: ");
    scanf("%f", &m);
    printf("Voc� digitou os valores %d e %.1f. Obrigado!\n", n, m );
    */

    /*char r;
    char s;
    printf("Digite s� uma letra: ");
    fflush(stdin);
    scanf("%c", &r);
    printf("Digite mais uma letra: ");
    fflush(stdin);
    scanf("%c", &s);
    printf("Voc� digitou as letras \"%c\" e \"%c\".", r, s);
    */

    /*
    //>>>PARA UM S� CARACTERE USAR O SEGUINTE COMANDO:<<<
    char r;
    char s;
    printf("Digite s� uma letra: ");
    fflush(stdin);
    r = getchar ();
    printf("Digite mais uma letra: ");
    fflush(stdin);
    s = getchar ();
    printf("Voc� digitou as letras \"%c\" e \"%c\".", r, s);
    */

    //>>>PARA USO DE CARACTERESSS (NOMES GRANDES) USAR O SEGUINTE COMANDO:<<<
    char nome [30];
    char ender [40];
    printf("Digite seu nome: ");
    fflush(stdin);
    gets (nome);
    printf("Digite seu endere�o: ");
    fflush(stdin);
    gets (ender);
    printf("Voc� digitou \"%s\" e \"%s\".", nome, ender);




}
