#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");

    int x ,y, z;
    y = x - 1;
    z = x + 1;


    printf("<<< Antecessor e Sucessor >>> \n");
    printf("Digite um n�mero: ");
    scanf("%d", &x);
    printf("Analisando o n�mero %d, seu antecessor � o %d e o seu sucessor � o %d.\n", x,y,z);
}
