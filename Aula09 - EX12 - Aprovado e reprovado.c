#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");

    char nome [40];
    float media, n1, n2;

    printf("Digite o nome do aluno: ");
    gets (nome);
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    media = (n1+n2)/2;
    printf("O(a) aluno(a) %s tirou as seguintes notas: %.1f e %.1f; e ficou com média %.1f.\n", nome, n1, n2, media);
    printf ("Status:\n**********\n %s\n**********\n", (media>=7)?"Aprovado":"Reprovado");
}

