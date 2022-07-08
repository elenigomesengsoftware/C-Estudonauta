#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");

    char nome1[30], nome2[30], nome[30];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;

    printf("--------<<< EX004 - LISTAGEM >>>--------\n \n");

    printf("Cadastrando a primeiro pessoa:\n------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets (nome1);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo1 = getchar ();
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota1);

    printf("Cadastrando a segunda pessoa:\n------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets (nome2);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo2 = getchar ();
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota2);
    fflush(stdin);

    printf("Cadastrando a terceira pessoa:\n------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets (nome3);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo3 = getchar ();
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota3);
    fflush(stdin);


    printf("\nListagem Completa\n--------------------\n");
    printf("NOME\t\t\t SEXO\t NOTA\n");
    printf("%-25s %-5c %5.1f\n", nome1, sexo1, nota1);
    printf("%-25s %-5c %5.1f\n", nome2, sexo2, nota2);
    printf("%-25s %-5c %5.1f\n", nome3, sexo3, nota3);

}

