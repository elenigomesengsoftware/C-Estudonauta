#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");

    int x ,y, z;
    y = x - 1;
    z = x + 1;


    printf("<<< Antecessor e Sucessor >>> \n");
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Analisando o número %d, seu antecessor é o %d e o seu sucessor é o %d.\n", x,y,z);
}
